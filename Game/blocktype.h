#ifndef BLOCKTYPE_H
#define BLOCKTYPE_H
#include <QString>
#include "glinclude/glinclude.h"
#include "blockvertex.h"


/**
  * Palikkatyyppi. Kaikkilla eri muotoisilla ja n�k�isill� blockeilla on oma BlockTypens�.

  * @brief
  *  BlockTypet erotetaan toisistaan id:n avulla. Id generoidaan joka kartan luonnin yhteydess� ja tallennetaan karttatiedostoon.
  *  BlockType pit�� my�s sis�ll�� tarvittavan tiedon palikan piirt�miseen.
  */
class BlockType
{
public:
    BlockType();
    ushort index()const{return mIndex;}
    QString name()const{return mName;}
    GLuint vbo()const{return mVBO;}
private:
    QString mName;
    ushort mIndex;
    GLuint mVBO;
};

#endif // BLOCKTYPE_H
