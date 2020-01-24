
//typedef int entry;
#include "Global.h"


typedef struct treenodes{
    entry item;
    struct treenodes *right,*left;
}nodes;

////////////////////////////////////
typedef struct node{
   nodes item;
   struct node *next;
}Node;

typedef struct{
  Node *Front;
  Node *rear;
  int Size;
}Queue;

////////////////////////////////////
typedef struct no{
    void *item;
    struct no *next;
}n;


typedef struct{
  n *top;
  int Size;
}Stack;
////////////////////////////////////

typedef nodes * trees;


void CreateTreeS(trees *t);

int EmptyS(trees *t);

int FullS(trees *t);

void ClearTreeS(trees *t);

int TreeSizeS(trees *t);

int TreeDepthS(trees *t);

void preorderS(trees *t,void (*pf)(entry));

void postorderS(trees *t,void (*pf)(entry));

void inorderS(trees *t,void (*pf)(entry));

void inorderSiterativeS(trees *t,void (*pf)(entry));/////

void InsertRec(trees *t,entry *element);

void InsertRecAno(trees *t,entry *element,int *depth);

int findItemRec(trees *t,entry *element,int k);

//void increaseby1(trees *t,void (*pp)(entry*)); OR

void increaseby1(trees *t);

int search(trees *t,int tosearch);

int Searchtree(trees *t,int v);

int countLeaves(trees *t);

nodes * closestBST(trees * t, int val);

void traverseLevel(trees *t,void (*visit)(entry));

int searchbinary(trees *t,int k);

int countfullnode(trees *t);






void CreateQueue(Queue *q);

void Append(Queue *q,nodes *e);

void Delete(Queue *q,nodes *e);

int QueueEmpty(Queue *q);





void createStack(Stack *s);

int EmptyStack(Stack *s);

int FullStack(Stack *s);

void Push(Stack *s,void *e);

void Pop(Stack *s,void **e);
