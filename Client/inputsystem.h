#ifndef INPUTSYSTEM_H
#define INPUTSYSTEM_H
#include <QObject>
#include <QEvent>

class InputSystem:public QObject
{
    Q_OBJECT
public:
    InputSystem(QObject *parent);

    /**
      *Tutkii QEventin ja ottaa tiedot talteen mik�li se on sy�te.
    */
    bool handleEvent(const QEvent *event);

    /**
      *
      */
    void waitAnyInput();

private:

signals:
    void inputGet();


};

#endif // INPUTSYSTEM_H
