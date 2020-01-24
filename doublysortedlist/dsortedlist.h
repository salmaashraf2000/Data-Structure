#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int key;
    char info;
}entry;



typedef struct Node{
  entry item;
  struct Node *next;
  struct Node *prev;
}node;

typedef struct{
   node *head;
   int Size;
}sortlist;

void createDList(sortlist *l);

void Insert(sortlist *l,entry e);

void traverse(sortlist *l);

void retrieve(sortlist *l,int k,entry *e);

void destroy(sortlist *l);
