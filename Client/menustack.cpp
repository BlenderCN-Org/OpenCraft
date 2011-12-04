#include "menustack.h"
#include <QWidget>
#include "mainmenuwidget.h"
MenuStack::MenuStack(QWidget *parent) :
    QStackedWidget(parent)
{
    memset(mMenus,0,sizeof(QWidget*)*eMenuStateCount);//Nollataan taulukko, kun se ei ole viel� t�ynn�, niin ett� voi tarkistaa onko widgetti olemassa

    //setAttribute(Qt::WA_OpaquePaintEvent);//L�pin�kyv� tausta

    mMenus[0] = new MainMenuWidget;
    this->addWidget(mMenus[0]);


    //Muut valikot vastaavasti t�h�n vaa..


    this->setCurrentIndex(0);
}


void MenuStack::openMenu(MenuState menu)
{
    setEnabled(true);//Varmistetaan ett� valikot varmasti ovat n�kyviss�
    setVisible(true);
    setCurrentIndex((int)menu); //Valitaa n�ytett�v�ksi parametrina annettu
}


void MenuStack::hideMenu()
{
    //Piilotetaan valikko
    setEnabled(false);
    setVisible(true);
}
