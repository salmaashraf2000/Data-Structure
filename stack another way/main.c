#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
// [[[]]] [[]  ]][ error
int main()
{
    int flag=0;
    char entry;
    Stack s=createStack(4);
    entry=getchar();
    while(entry!='\n'){
        if(entry=='['){
            push(entry,s);
        }else if(entry==']' && !isEmpty(s)){
            pop(s);
        }else{
            printf("Error\n");
            flag=1;
            break;
        }
        if(isFull(s)){
            printf("Error stack is full\n");
            flag=1;
            break;
        }
      entry=getchar();
    }
    if(flag==0 && !isEmpty(s)){
        printf("error\n");
    }else if(flag==0 && isEmpty(s)){
        printf("done\n");
    }
    destroyStack(s);
    return 0;
}
