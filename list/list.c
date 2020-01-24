#include "list.h"
#include <stdio.h>
#include <stdlib.h>


void createlist(List *l){
   l->Size=0;
}

int isfull(List *l){
  return l->Size==MAX;
}

int isempty(List *l){
  return l->Size==0;
}

void Insert(List *l,entry item,int position){
    if(!isfull(l)){
         for(int i=l->Size-1;i>=position;i--){
      l->arr[i+1]=l->arr[i];
    }
    l->arr[position]=item;
    l->Size++;
    }else{
      printf("list is full\n");
    }
}

void Delete(List *l,int p,entry *e){
  if(!isempty(l)){
    *e=l->arr[p];
    for(int i=p;i<l->Size;i++){
      l->arr[i]=l->arr[i+1];
    }
    l->Size--;
  }else{
    printf("list is empty\n");
  }
}


void destroy(List *l){
   l->Size=0;
}

int ListSize(List *l){
  return l->Size;
}

void retrieve(List *l,int p,entry *e){
   *e=l->arr[p];
}

void Replace(List *l,int p,entry e){
    l->arr[p]=e;
}

void traverse(List *l,void (*ptr)(entry)){
   for(int i=0;i<l->Size;i++){
     (*ptr)(l->arr[i]);
   }
}

entry first(List *l){
    if(!isempty(&l)){
        return l->arr[0];
    }
    return NULL;
}

entry last(List *l){
   if(!isempty(&l)){
        return l->arr[l->Size-1];
    }
    return NULL;
}
