#include <stdio.h>
#include <stdlib.h>
#include "queueLinked.h"

void print(QueueEntry e){
  printf("%d\n",e);
}

void func(Queue *q){
  Node *p=q->Front;
  q->rear->next= p;
  q->rear= p;
  q->Front=p->next;
  q->rear->next= NULL;

}



int main()
{
   Queue q,q1;
   QueueEntry e;
   CreateQueue(&q1);
   CreateQueue(&q);
   Append(&q,1);
   Append(&q,2);
   Append(&q,3);
   Append(&q,4);
  // copyQueue(&q,&q1);
  Delete(&q,&e);
   traverseQueue(&q1,&print);
   func(&q1);
   printf("\n");
   //traverseQueue(&q1,&print);
   /*Delete(&q,&e);
   printf("%d size\n",QueueSize(&q));
   printf("%d ele\n",e);
   ClearQueue(&q);
   traverseQueue(&q,&print);*/

    return 0;
}
