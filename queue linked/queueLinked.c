#include "queueLinked.h"
#include <stdio.h>
#include <stdlib.h>

void CreateQueue(Queue *q){
  q->Front=NULL;
  q->rear=NULL;
  q->Size=0;
}

void ClearQueue(Queue *q){
 while(q->Front){
   q->rear=q->Front->next;
   free(q->Front);
   q->Front=q->rear;
 }
 q->Size=0;
}

int QueueSize(Queue *q){
 return q->Size;
}

int QueueFull(Queue *q){
 return 0;
}

int QueueEmpty(Queue *q){
 return (q->Front==NULL);
}

void Append(Queue *q,QueueEntry e){ //better to make function return 0 or 1 if allocation is done successfully
  Node *p=(Node *)malloc(sizeof(Node));
  p->item=e;
  p->next=NULL;
  if(q->rear==NULL){
    q->Front=p;
  }else{
    q->rear->next=p;
  }
  q->rear=p;
  q->Size++;
}

void Delete(Queue *q,QueueEntry *e){
  Node *p=q->Front;
  *e=p->item;
  q->Front=p->next;
  free(p);
  if(q->Front==NULL){
    q->rear=NULL;
  }
  q->Size--;
}

void traverseQueue(Queue *q,void (*print)(QueueEntry)){
  Node *p;
  for(p=q->Front;p!=NULL;p=p->next){
    (*print)(p->item);
  }
}


void copyQueue(Queue *q,Queue *q1){
  Node *p;
  for(p=q->Front;p!=NULL;p=p->next){
    Append(q1,p->item);
  }
}
