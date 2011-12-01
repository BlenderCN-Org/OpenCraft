#include "game.h"

Game::Game()
    :mMainWindow(0)
{
}

Game::~Game()
{
    //Varmuuden varalta t�h�nkin tarkistus
    if (mMainWindow) delete mMainWindow;
}

Game *Game::instance()
{
    static Game mGame; //T�m� on varsinainen peli. Sit� voi olla vain yksi kpl.
    return &mGame;
}

bool Game::init()
{
    if (mMainWindow == 0) //Aika turha tarkitus...
    {
        mMainWindow = new MainWindow();
    }
}

void Game::launch()
{
    if (mMainWindow) mMainWindow->show();
}

void Game::destroy()
{
    if (mMainWindow) delete mMainWindow;
}
