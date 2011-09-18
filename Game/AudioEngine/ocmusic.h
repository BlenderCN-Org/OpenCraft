#ifndef OCMUSIC_H
#define OCMUSIC_H
#include <QString>

/**
  * OCMusic on abstrakti luokka musiikkeja varten. Sille pit�isi tehd� alaluokka Ogg:ta varten (OCMusicOgg?)
  * Alaluokkien on oltava thread-safe, niin ett� OCAudioThread voi toistaa niit�
  */
class OCAudioEngine;
class OCAudioThread;

class OCMusic
{
    friend class OCAudioEngine;
    friend class OCAudioThread;

public:
    virtual bool isPlaying() = 0;

    /**
      * Alustaa musiikin tiedostosta
      */
    virtual bool load(const QString path) = 0;

    virtual QString name() = 0;
protected:
    OCMusic();
    ~OCMusic();

    /**
      * N�it� kutsutaan OCAudioEnginen playMusic funktiossa...
      */
    virtual void play() = 0;
    virtual void stop() = 0;

    /**
     * Purkaa puskuriin uutta dataa
     */
    virtual void decodeNext() = 0;

    /**
     * Soittaa datan puskurista. Kutsutaan aina decodeNextin j�lkeen
     */
    virtual void playNext() = 0;
};

#endif // OCMUSIC_H
