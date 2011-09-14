#ifndef MENUSCREENSTATE_H
#define MENUSCREENSTATE_H
#include "screenstate.h"
#include "gltexture2d.h"
#include "time.h"

class MenuScreenState : public ScreenState
{
    Q_OBJECT
public:
    MenuScreenState(QObject *parent = 0);
    ~MenuScreenState();
    bool init(MainWindow *mainWindow);
    void load();
    void unload();
    void mouseEvent(int button,int state,int x,int y);
    void keyPressEvent(unsigned char key,int mouseX,int mouseY);
    void keyReleaseEvent(unsigned char key,int mouseX,int mouseY);
    void specialKeyPressEvent(int key,int mouseX,int mouseY);
    void specialKeyReleaseEvent(int key,int mouseX,int mouseY);
    void mouseWheelEvent(int wheel,int direction){} //Tuskin tarvitaan t�t�...
    void paintEvent(MainWindow *mainWindow);
    void paintGL(MainWindow *mainWindow);
    void windowResize(int w,int h);
    const char *name(){return "menu";}
    void selected();
private:
    void setupGL(int w,int h);
    int mFPS;
    int mFPSCounter;
    clock_t mLastTime;

    bool mLoaded;
    float mWindowW;
    float mWindowH;
};

#endif // MENUSCREENSTATE_H
