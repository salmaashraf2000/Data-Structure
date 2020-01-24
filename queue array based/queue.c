#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
//#include "global.h"



void createQueue(Queue *q){
    q->Front=0;
    q->rear=MAX-1;
    q->Size=0;
}


void enqueue(Entry e,Queue *q){

    if(!isfull(q)){
       q->rear=(q->rear+1)%MAX;
       q->entry[q->rear]=e;
       q->Size++;
       //printf("%d\n",q->Size);
    }else{
      printf("queue is full\n");
    }
}


/*Entry dequeue(Queue *q){
    Entry e;
    if(!isempty(q)){
       e=q->entry[q->Front];
       q->Front=(q->Front+1)%MAX;
       q->Size--;
       return e;
    }else{
       printf("queue is empty\n");
       return e;
    }

}*/

void dequeue(Entry *e,Queue *q){
    if(!isempty(q)){
       *e=q->entry[q->Front];
       q->Front=(q->Front+1)%MAX;
       q->Size--;
    }else{
       printf("queue is empty\n");
    }

}


void destroy(Queue *q){
    createQueue(q);
}


int isempty(Queue *q){
    if(q->Size==0){
        return 1;
    }
    return 0;
}


int isfull(Queue *q){
    //printf("%d \n",q->Size);
    if(q->Size==MAX){
        return 1;
    }
    return 0;
}


void traverse(Queue *q){
   if(!isempty(q)){
     for(int i=q->Front,sz=0;sz<q->Size;sz++){
       // printf("%s %d\n",(q->entry[i]).name,(q->entry[i]).id);
       printf("%d\n",(q->entry[i]));
        i=(i+1)%MAX;
     }
   }else{
      printf("queue is empty\n");
   }
}


Entry frontElement(Queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
    }else{
        Entry ch=q->entry[q->Front];
        return ch;
    }
}


int queueSize(Queue *q){
    return q->Size;
}



Entry lastElement(Queue *q){
    return q->entry[q->rear];
}

void Copy(Queue *q,Queue *nq){
  for(int i=q->Front,j=nq->rear,sz=0;sz<q->Size;sz++){
         j=(j+1)%MAX;
      nq->entry[j]=q->entry[i];
       nq->Size++;
      i=(i+1)%MAX;
     // j=(j+1)%MAX;
  }
}





