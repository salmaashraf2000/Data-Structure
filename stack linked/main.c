#include <stdio.h>
#include <stdlib.h>
#include "stackLinked.h"

void print(StackEntry e){
  printf("%d\n",e);
}

void Last(Stack *s){
  StackEntry e;
  Pop(s,&e);
  printf("last %d\n",e);
}

void First(Stack *s){
  Stack temp;
  createStack(&temp);
  StackEntry e,target;
  while(!EmptyStack(s)){
    Pop(s,&e);
    Push(&temp,e);
  }
  target =e;
  while(!EmptyStack(&temp)){
    Pop(&temp,&e);
    Push(s,e);
  }
  printf("target %d\n",target);
}

void clear(Stack *s){
  int sz=SizeStack(s);
  StackEntry e;
  while(sz--){
    Pop(s,&e);
  }
}

int main()
{
    Stack s;
    StackEntry e;
    createStack(&s);
    Push(&s,1);
    Push(&s,2);
    Push(&s,3);
    Push(&s,4);
    Pop(&s,&e);
    printf("size: %d\n",SizeStack(&s));
    traverse(&s,&print);
    //printf("%d\n",Lastelement(&s));
    //printf("%d\n",Firstelement(&s));
    //Last(&s);
    //First(&s);
    clear(&s);
    traverse(&s,&print);
    printf("size: %d\n",SizeStack(&s));
    return 0;
}
