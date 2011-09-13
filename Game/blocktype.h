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
    QString name()const;
    int countVertices()const{return mVertexCount;}
    const BlockVertex *getVertices()const{return mVertices;}
private:
    QString mName;
    ushort mIndex;
    int mVertexCount;
    BlockVertex *mVertices;
};

#endif // BLOCKTYPE_H
