#include <stdio.h>
#include <stdlib.h>
#include "global.h"
typedef int Entry ;

typedef struct{
  int rear;
  int Front;
  int Size;
  Entry entry[MAX];
}Queue;

void createQueue(Queue *q);

void enqueue(Entry e,Queue *q);

//Entry dequeue(Queue *q);

void dequeue(Entry *item,Queue *q);

void destroy(Queue *q);

int isempty(Queue *q);

int isfull(Queue *q);

void traverse(Queue *q);

Entry frontElement(Queue *q);

int queueSize(Queue *q);

Entry lastElement(Queue *q);

void Copy(Queue *q,Queue *nq);

