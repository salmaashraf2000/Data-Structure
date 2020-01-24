/*#ifndef TREES_H
#define TREES_H
#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "TreeS.h"


typedef struct{
  int rear;
  int Front;
  int Size;
  nodes *n[MAX];
}Queue;

void createQueue(Queue *q);

void enqueue(nodes *e,Queue *q);

//Entry dequeue(Queue *q);

void dequeue(nodes *e,Queue *q);

void destroy(Queue *q);

int isempty(Queue *q);

int isfull(Queue *q);

//void traverse(Queue *q);

int queueSize(Queue *q);


#endif*/
