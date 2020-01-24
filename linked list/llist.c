#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

void createlist(List *l){
    l->head=NULL;
    l->Size=0;
}

void insertList(List *l,entry e,int pos){

    node *p = (node*)malloc(sizeof(node));
    if(!p){
        printf("error\n");
    }
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
  l->Size++;
}

int fullList(List *l){
  return 0;
}

int emptyList(List *l){
 return (l->Size==0);
}

void deleteElement(List *l,entry *e,int pos){
    if(!emptyList(l)){
    node *temp,*q;
    if(pos==0){
        *e=l->head->item;
        temp=l->head;
        l->head=l->head->next;
        free(temp);
    }else{
       // if(l->Size>1){
        int i;
        for(q=l->head,i=0;i<pos-1;i++){
            q=q->next;
        }
        *e=q->next->item;
        temp=q->next;
        q->next=temp->next;
        free(temp);
        /*}else{
            temp=l->head;
            *e=temp->item;
            l->head=NULL;
            free(temp);
         }*/
    }
  }else{
    printf("list is empty\n");
  }
  l->Size--;
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
  q->next->item=e;
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
   node *n/*=(node *)malloc(sizeof(node))*/;
   node *p;
   int i;
   for(p=l->head,i=0;i<pos-1;i++){
     p=p->next;
   }
   n=p->next;
   p->next=n->next;
   n->next=l->head;
   l->head=n;

}

