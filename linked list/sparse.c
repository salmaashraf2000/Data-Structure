#include <stdio.h>
#include <stdlib.h>
#include "sparse.h"

void createslist(slist *l){
  (*l)=NULL;
}

void insertslist(slist *l,int r,int c,entry info){
  NODE *n=(NODE *)malloc(sizeof(NODE));
  n->row=r;
  n->column=c;
  n->item=info;
  n->next=NULL;
  if(!(*l)){
    (*l)=n;
  }else{
    NODE *p=(*l);
    while(p->next){
        p=p->next;
    }
    p->next=n;
  }
}

void printslist(slist *l){
  NODE *n=(*l);
  while(n){
    printf("row: %d column: %d value: %d\n",n->row,n->column,n->item);
    n=n->next;
  }

}

