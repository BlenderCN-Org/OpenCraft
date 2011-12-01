#include <QtGui/QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (Game::instance()->init())//Jos alustus onnistui
    {
        Game::instance()->launch();//K�ynnistet��n peli
    }
    Game::instance()->destroy();//Tuhotaan kaikki
    return a.exec();//Aloitetaan eventlooppi
}
