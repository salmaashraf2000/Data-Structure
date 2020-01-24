/*#include "stack.h"
//#include "global.h"
#include <stdio.h>
#include <stdlib.h>



void CreateStack(Stack *s){
   s->top=0;
}

void Push(Entry item,Stack *s){
  if(!StackFull(s)){
     s->arr[s->top++]=item;
  }else{
     printf("stack is full\n");
  }

}
Entry Pop(Stack *ptrs){
    Entry ch;
   --ptrs->top;
   ch=ptrs->arr[ptrs->top];
   return ch;
}
/*void Pop(entry *item,Stack *ptrs){
   --ptrs->top;
   *item=ptrs->arr[ptrs->top];

}*/

/*int	StackEmpty(Stack *s){
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

Entry firstele(Stack *s){
return s->arr[0];
}

Entry lastele(Stack *s){
    Entry ch=s->arr[--s->top];
    s->top++;
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

Entry element(Stack *s,int i){
 return s->arr[i];
}

void traverseStack(Stack *s){
  if(!StackEmpty(s)){
        int size=s->top-1;
    while(size>-1){
        printf("name: %s id: %d\n",(s->arr[size]).name,(s->arr[size]).id);
        size--;
    }
  }
}*/
