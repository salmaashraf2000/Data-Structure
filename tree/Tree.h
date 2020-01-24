#include "Global.h"


typedef struct treenode{
    entry item;
    struct treenode *right,*left;
}node;

typedef struct{
  int Size;
  int depth;
  node *root;
}tree;


void CreateTree(tree *t);

int Empty(tree *t);

void ClearTree(tree *t);

int TreeSize(tree *t);

int TreeDepth(tree *t);

void preorder(tree *t,void (*pf)(entry));

void postorder(tree *t,void (*pf)(entry));

void inorder(tree *t,void (*pf)(entry));

int Full(tree *t);

void inorderSiterative(tree *t,void (*pf)(entry));

void insertRec(tree *t,entry *element);

void InsertIter(tree *t,entry *element);

int finditemRecAno(tree *t,entry *element,int key);
