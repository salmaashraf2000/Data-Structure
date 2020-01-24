#include <stdio.h>
#include <stdlib.h>
//#include "doublyended.h"
#include "doublyendedlinked.h"
int main()
{
    Doublyended d;
    createDoublyEnded(&d);
    int n,cntodd=0,cnteven=0;
    entry e;
    while(!full(&d)){
        scanf("%d",&n);
        if(n%2==0){
            Pushbottom(&d,n);
            cnteven++;
        }else{
            Pushup(&d,n);
            cntodd++;
        }
    }
        while(cnteven>0){
            Popbottom(&d,&e);
             printf("%d\n",e);
            cnteven--;
        }while(cntodd>0){
            Popup(&d,&e);
            printf("%d\n",e);
            cntodd--;
        }


    return 0;
}


/*
typedef struct n{
  entry info;
  struct n *next;
}Node;

typedef struct{
  Node *topup;
  Node *topbottom;
}Doublyended;*/
