#ifndef BLOCKTYPEMANAGER_H
#define BLOCKTYPEMANAGER_H
#include <QMap>
#include "blocktype.h"
#include "block.h"

/**
  * BlockTypeManager hallinnoi BlockTypej�. Se pit�� niist� kirjaa ja sis�lt�� funktiot niiden etsimiseen. Ja my�skin lataa BlockTypet
  */
class BlockTypeManager
{
public:
    BlockTypeManager();

    const BlockType *getBlockType(ushort id){Q_ASSERT(mBlockTypes.contains(id));return mBlockTypes.value(id);}
    const BlockType *getBlockType(const Block &block){return getBlockType(block.mBlockType);}
    bool loadBlocks();
private:

    QMap<ushort,BlockType*> mBlockTypes;
};

#endif // BLOCKTYPEMANAGER_H
