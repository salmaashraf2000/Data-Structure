/*#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*void CreateStack(Stack *s){
   s->top=0;
}

void Push(entry item,Stack *s){
  if(!StackFull(s)){
     s->arr[s->top++]=item;
  }else{
     printf("stack is full\n");
  }

}
/*entry Pop(Stack *ptrs){
    entry ch;
   --ptrs->top;
   ch=ptrs->arr[ptrs->top];

   return ch;
}*/
/*void Pop(entry *item,Stack *ptrs){
   --ptrs->top;
   *item=ptrs->arr[ptrs->top];

}

int	StackEmpty(Stack *s){
  if(s->top<=0){
    return 1;
  }else{
    return 0;
  }
}
int	StackFull(Stack *ptrs){
  if(ptrs->top==MAX){
    return 1;
  }else{
    return 0;
  }
}


int	StackSize(Stack *ptrs){
  return ptrs->top;
}
void ClearStack(Stack *ptrs){
  ptrs->top=0;
}

entry firstele(Stack *s){
return s->arr[0];
}

entry lastele(Stack *s){
    entry ch=s->arr[--s->top];
return ch;
}


void Copystack(Stack *s,Stack *nw){
    int i=0;
   while(i<s->top){
     nw->arr[i]=s->arr[i];
     //printf("%c\n",nw->arr[i]);
     i++;
     nw->top++;
   }
}

entry element(Stack *s,int i){
 return s->arr[i];
}

*/

/*void CreateStack(Stack *s){
   s->top=0;
}

void Push(void item,Stack *s){
  if(!StackFull(s)){
     s->arr[s->top++]=item;
  }else{
     printf("stack is full\n");
  }

}

void Pop(void *item,Stack *ptrs){
   --ptrs->top;
   *item=ptrs->arr[ptrs->top];

}

int	StackEmpty(Stack *s){
  if(s->top<=0){
    return 1;
  }else{
    return 0;
  }
}
int	StackFull(Stack *ptrs){
  if(ptrs->top==MAX){
    return 1;
  }else{
    return 0;
  }
}


int	StackSize(Stack *ptrs){
  return ptrs->top;
}
void ClearStack(Stack *ptrs){
  ptrs->top=0;
}*/




