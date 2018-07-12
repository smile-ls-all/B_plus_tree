#include "BPlusTree.h"

static KeyType Unavailable = INT_MIN;

/*初始化节点*/
static BPlusTree mallocNewNode()
{
    BPlusTree NewNode;
    int i;
    NewNode =malloc(sizeof(struct BPlusTree));
    if(NewNode==NULL)
      exit(EXIT_FAILURE);
      
    i=0;
    while (i<M+1)
    {
       NewNode->key[i]=Unavailable;
       NewNode->Children[i]=NULL;
       i++;
    }
    NewNode->Next=NULL;
    NewNode->keyNum=0;
    
    return NewNode;
}


extern BPlusTree Initialize()
【

