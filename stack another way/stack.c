#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

//check if stack is empty
int isEmpty(Stack s){
 return s->top_stack==Empty;
}


//check if stack is full
int isFull(Stack s){
   return s->top_stack==s->capacity;
}


//create stack
Stack createStack(int Size){
 Stack s;
 s = malloc(sizeof(struct stk));
 if(s==NULL){
    printf("no space\n");
 }
 s->Array= malloc(sizeof(entry_type)*Size);
 if(s->Array==NULL){
   printf("no space\n");
 }
 s->capacity=Size;
 s->top_stack=Empty;
 return s;
}


//clear the memory allocated for stack
void destroyStack(Stack s){
 if(s!=NULL){
    free(s->Array);
    free(s);
 }
}

//precondition: stack is not full
//push element to stack
void push(entry_type x,Stack s){
 if(isFull(s)){
    printf("stack is full\n");
 }else{
    s->Array[++s->top_stack]=x;
 }
}

//precondition: stack is not empty
//return top element in stack
entry_type top(Stack s){
  if(isEmpty(s)){
    return NULL;
  }else{
    return s->Array[s->top_stack];
  }

}

//precondition: stack is not empty
//pop element from stack
void pop(Stack s){
    if(isEmpty(s)){
        printf("stack is empty\n");
    }else{
        s->top_stack--;
    }

}
