#include <stdio.h>

#include <time.h>
#include <stdlib.h>

#include "BPlusTree.h"

 

int main(int argc, const char * argv[]) {

    int i;
	long c1,c2;

    BPlusTree T;

    T = Initialize(); 
    
    c1 = clock();

    i = 10000000;
	printf("进行插入操作");

    while (i > 0)

        T = Insert(T, i--);	
    
/*
    i = 5000001;

    while (i < 10000000)

        T = Insert(T, i++);

    

    i = 10000000;

    while (i > 100)

        T = Remove(T, i--);

    

    Travel(T);

    Destroy(T);

    */

    c2 = clock();
    printf("\n用时： %lf秒\n",difftime(c2,c1)/1000);

	printf("序列化:");
	c1 = clock();
    serialize(T);
	c2 = clock();

    printf("\n用时： %lf秒\n",difftime(c2,c1)/1000);

	printf("反序列化:");
	c1 = clock();
	T=deserialize();
    c2 = clock();
	printf("\n用时： %f秒\n",difftime(c2,c1)/1000);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n序列化:");
	c1 = clock();
	serialize(T);
	c2 = clock();
	printf("\n用时： %lu秒\n",(c2 - c1)/CLOCKS_PER_SEC);

	printf("\nover");

}
