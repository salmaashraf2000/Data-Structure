/*#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include "global.h"
//#include "TreeS.h"



void createQueue(Queue *q){
    q->Front=0;
    q->rear=MAX-1;
    q->Size=0;
}


void enqueue(nodes *e,Queue *q){

    if(!isfull(q)){
       q->rear=(q->rear+1)%MAX;
       q->n[q->rear]= e;
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

}

void dequeue(nodes *e,Queue *q){
    if(!isempty(q)){
       e=q->n[q->Front];
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


/*void traverse(Queue *q){
   if(!isempty(q)){
     for(int i=q->Front,sz=0;sz<q->Size;sz++){
      //  printf("%s %d\n",(q->e[i]).name,(q->e[i]).id);
        i=(i+1)%MAX;
     }
   }else{
      printf("queue is empty\n");
   }
}



int queueSize(Queue *q){
    return q->Size;
}*/








