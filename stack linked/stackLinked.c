#include "stackLinked.h"
#include <stdio.h>
#include <stdlib.h>

void createStack(Stack *s){
  s->top=NULL;
  s->Size=0;
}

int EmptyStack(Stack *s){
  return (s->top==NULL);
}

int FullStack(Stack *s){
 return 0;
}

void Push(Stack *s,StackEntry e){
  Node *n=(Node *)malloc(sizeof(Node));
  n->item=e;
  n->next=s->top;
  s->top=n;
  s->Size++;
}

void Pop(Stack *s,StackEntry *e){
  Node *p;
  *e=s->top->item;
  p=s->top;
  s->top=s->top->next;
  free(p);
  s->Size--;
}

void clearStack(Stack *s){
   Node *p=s->top;
   while(p){
      p=p->next;
      free(s->top);
      s->top=p;
   }
   s->Size=0;
}

void traverse(Stack *s,void (*print)(StackEntry)){
    Node *p=s->top;
    int sz=SizeStack(s);
   while(sz--){
     (*print)(p->item);
     p=p->next;
   }
}


int SizeStack(Stack *s){
 return s->Size;
}


StackEntry Lastelement(Stack *s){
   return s->top->item;
}

StackEntry Firstelement(Stack *s){
   Node *p=s->top;
   StackEntry e;
    int sz=SizeStack(s);
   while(sz--){
     e=p->item;
     p=p->next;
   }
   return e;
}
