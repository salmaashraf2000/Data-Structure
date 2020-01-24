#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void createlist(List *l){
    l->head=NULL;
    l->Size=0;
}

void insertList(List *l,entry e,int pos){

    node *p = (List*)malloc(sizeof(List));
  p->item=e;
  p->next=NULL;
  if(pos==0){
    p->next=l->head;
    l->head=p;
  }else{
   node *q;
   int i;
   for(q=l->head,i=0;i<pos-1;i++){
    q=q->next;
   }
   p->next=q->next;
   q->next=p;

  }
}

int fullList(List *l){
  return 0;
}

int emptyList(List *l){
 return (l->Size==0);
}

void deleteElement(List *l,entry *e,int pos){
    if(!emptyList(l->head)){ /////////////////////////
    node *temp,*q;
    if(pos==0){
        *e=l->head->item;
        temp=l->head->next;
        free(l->head);
        l->head=temp;
    }else{
        int i;
        for(q=l->head,i=0;i<pos-1;i++){
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
   while(l->head){
    temp= l->head;
    l->head = l->head->next;
    free(temp);
   }
}

void traverseList(List *l,void (*print)(entry)){
   node *p=l->head;
   while(p){
     (*print)(p->item);
      p=p->next;
   }
}

void replaceElement(List *l,entry e,int pos){
  int i;
  node *q;
  for(q=l->head,i=0;i<pos-1;i++){
    q=q->next;
  }
  q->item=e;
}

void retrieve(List *l,entry *e,int pos){
    int i;
    node *q;
    for(q=l->head,i=0;i<pos-1;i++){
        q=q->next;
    }
    *e=q->item;
}


void ispresent(List *l,int pos){
   node *n=(node *)malloc(sizeof(node));
   node *p,*temp;
   for(p=l->head,int i=0;i<pos-1;i++){
     p=p->next;
   }
   n=p->next;
   temp=p->next;
   p->next=temp->next;
   free(temp);
   n-next=l->head->next;
   l->head=n;
}

