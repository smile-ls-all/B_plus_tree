#ifndef BPlusTree_h
#define BPlusTree_h

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define M 4   //定义B+树的阶数
#define LIMIT_M_2 (M%2==1 ? (M+1)/2:M/2)  //最小的键值数
typedef struct BPlusNode *BPlusTree,*Position;
typedef int keyType;
struct BPlusNode{
    int keyNum;
    keyType key[M+1];
    BPlusTree Children[M+1];
    BPlusTree Next;
};

/*定义树的操作*/

/* 初始化*/
BPlusTree Initialize();//返回一个树的根节点

/* 插入*/
extern BPlusTree Insert(BPlusTree T,KeyType Key);

/* 删除 */
extern BPlusTree Remove(BPlusTree T,KeyType Key);

/* 销毁 */
extern BPlusTree Destroy(BPlusTree T);

/* 遍历节点 */
extern void Travel(BPlusTree T);

/* 遍历树叶节点的数据 */
extern void TravelData(BPlusTree T);

 
#endif /* BPlusTree_h */




