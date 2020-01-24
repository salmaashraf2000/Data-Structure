#include <stdio.h>
#include <stdlib.h>
#include "DoublyendedStack.h"

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
    printf("\n\n");
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
