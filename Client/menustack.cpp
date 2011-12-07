#include "menustack.h"
#include <QWidget>
#include "mainmenuwidget.h"
#include "settingsmenu.h"
#include "multiplayermenu.h"
#include <QGraphicsProxyWidget>
MenuStack::MenuStack(QObject *parent) :
    QGraphicsScene(parent),
    mCurrentMenuState(eMenuStateCount), //Laitetaan sellaiseksi jota ei voi valita...
    mCurrent(0)
{

}


void MenuStack::selectMenu(MenuState menu)
{
    if (mCurrentMenuState != menu) // Varmistetaan ett� ei tehd� turhaa ty�t�
    {
        if (mCurrent != 0) //Mik�li on ennest��n jokin jo valittuna
        {
            removeItem((QGraphicsItem*)mCurrent); //Poistetaan se
        }
        mCurrentMenuState = menu;


        //T�h�n vaan kaikki vaihtoehdot
        switch (mCurrentMenuState)
        {
        case eMainMenu:
            mCurrent = this->addWidget(new MainMenuWidget);
            break;
        case eOptions:
            mCurrent = this->addWidget(new SettingsMenu);
            break;
        case eMultiPlayer:
            mCurrent = this->addWidget(new MultiPlayerMenu);
            break;
        }
    }
}


void MenuStack::resize(int w, int h)
{
    setSceneRect(0,0,w,h);
    if (mCurrent) mCurrent->setGeometry(QRectF(0,0,w,h));
}


