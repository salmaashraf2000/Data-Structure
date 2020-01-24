/*#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void createlist(List *l){

    *l=NULL;
}

void insertList(List *l,entry e,int pos){

    node *p = (node*)malloc(sizeof(node));
  p->item=e;
  if(pos==0){
    p->next=*l;
    *l=p;
  }else{
   node *q;
   int i;
   for(q=*l,i=0;i<pos-1;i++){
    q=q->next;
   }
   p->next=q->next;
   q->next=p;

  }
}

int fullList(List l){
  return 0;
}

int emptyList(List l){
 return (l==NULL);
}

void deleteElement(List *l,entry *e,int pos){
    if(!emptyList(l)){ /////////////////////////
    node *temp,*q;
    if(pos==0){
        *e=(*l)->item;
        temp= *l;
        (*l)=(*l)->next;
        free(temp);
    }else{
        int i;
        for(q=*l,i=0;i<pos-1;i++){
            q=q->next;
        }
        *e=q->next->item;
        temp=q->next;
        q->next=temp->next;
        free(temp);
    }
  }else{
    printf("list is empty\n");
  }

}

void clearList(List *l){
   node *temp;
   while(*l){
    temp= *l;
    *l = (*l)->next;
    free(temp);
   }
}

void traverseList(List *l,void (*print)(entry)){
   node *p=*l;
   while(p){
     (*print)(p->item);
      p=p->next;
   }
}

void replaceElement(List *l,entry e,int pos){
  int i;
  node *q;
  for(q=*l,i=0;i<pos-1;i++){
    q=q->next;
  }
  q->next->item=e;
}

void retrieve(List *l,entry *e,int pos){
    int i;
    node *q;
    for(q=*l,i=0;i<pos-1;i++){
        q=q->next;
    }
    *e=q->item;
}*/



