#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"
#include "TreeS.h"
#include "stack.h"
#include "Global.h"
#include "queue.h"


void display(entry e){
  printf("%d\n",e.value);
}

void increase(entry *e){
    e->value=e->value+1;

}

int main()
{

    entry element;
    element.key=10;
    element.value=10;
   trees t1;
   CreateTreeS(&t1);
   InsertRec(&t1,&element);
   element.key=5;
    element.value=5;
    InsertRec(&t1,&element);
    element.key=15;
    element.value=15;
    InsertRec(&t1,&element);
    element.key=13;
    element.value=13;
    InsertRec(&t1,&element);
    element.key=7;
    element.value=7;
    InsertRec(&t1,&element);
    element.key=2;
    element.value=2;
    InsertRec(&t1,&element);
    element.key=9;
    element.value=9;
    InsertRec(&t1,&element);
    element.key=6;
    element.value=6;
    InsertRec(&t1,&element);
    element.key=11;
    element.value=11;
    InsertRec(&t1,&element);
    element.key=20;
    element.value=20;
    InsertRec(&t1,&element);

     //printf("depth %d\n",TreeDepthS(&t1));
     //   traverseLevel(&t1,display);
    printf("%d\n",countLeaves(&t1));
     printf("full %d\n",countfullnode(&t1));
    /*inorderS(&t1,display);
    printf("\n\n\n");
    int i=deleteItem(&t1,&element,10);

    inorderS(&t1,display);
    //inorderSiterativeS(&t1,display);
    /*traverseLevel(&t1,display);
    printf("%d\n",countLeaves(&t1));
    nodes *n;
    n=closestBST(&t1,8);
    printf("%d\n",n->item.value);
    /*printf("ch %d\n",search(&t1,1));
    printf("ch %d\n",search(&t1,2));
    printf("ch %d\n",search(&t1,5));
    printf("ch %d\n",search(&t1,15));*/
    /*printf("ch %d\n",Searchtree(&t1,1));
    printf("ch %d\n",Searchtree(&t1,2));
    printf("ch %d\n",Searchtree(&t1,5));
    printf("ch %d\n",Searchtree(&t1,4));
    /*preorderS(&t1,display);
    printf("\n");
    inorderS(&t1,display);
    printf("\n");
   // ClearTreeS(&t1);
    postorderS(&t1,display);
    printf("\nSize %d\n",TreeSizeS(&t1));
    printf("depth %d",TreeDepthS(&t1));
    entry s;
    printf("\n%d\n",findItemRec(&t1,&s,2));
    printf("%d %d\n",s.value,s.key);
    printf("\n");
    increaseby1(&t1,increase);
    inorderS(&t1,display);*/
   /* entry element;
    element.key=5;
    element.value=5;
   tree t1;
   CreateTree(&t1);
   insertRec(&t1,&element);
   element.key=2;
    element.value=2;
    insertRec(&t1,&element);
    element.key=6;
    element.value=6;
    insertRec(&t1,&element);
    element.key=4;
    element.value=4;
    insertRec(&t1,&element);
    element.key=1;
    element.value=1;
    insertRec(&t1,&element);
    preorder(&t1,display);
    printf("\n");
    inorder(&t1,display);
    printf("\n");
    ClearTree(&t1);
    postorder(&t1,display);
    printf("\nSize %d\n",TreeSize(&t1));
    printf("depth %d",TreeDepth(&t1));
    entry s;
    printf("\n%d\n",finditemRecAno(&t1,&s,2));
    printf("%d %d\n",s.value,s.key);*/
    return 0;
}
