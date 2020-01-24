#include <stdio.h>
#include <stdlib.h>
#include "dsortedlist.h"


int main(){

   entry e;
   e.info='a';
   e.key=1;
   sortlist dl;
   createDList(&dl);
   Insert(&dl,e);
   e.info='c';
   e.key=0;
   Insert(&dl,e);
   e.info='h';
   e.key=4;
   Insert(&dl,e);
    e.info='o';
   e.key=2;
   Insert(&dl,e);
     e.info='i';
   e.key=3;
   Insert(&dl,e);
     e.info='y';
   e.key=5;
   Insert(&dl,e);
   traverse(&dl);
   retrieve(&dl,5,&e);
   /*printf("deleted element %d %c\n",e.key,e.info);
    retrieve(&dl,0,&e);
   printf("deleted element %d %c\n",e.key,e.info);
    retrieve(&dl,5,&e);
   printf("deleted element %d %c\n",e.key,e.info);
    retrieve(&dl,2,&e);
   printf("deleted element %d %c\n",e.key,e.info);
    retrieve(&dl,3,&e);
   printf("deleted element %d %c\n",e.key,e.info);
    retrieve(&dl,4,&e);
   printf("deleted element %d %c\n",e.key,e.info);*/

  // destroy(&dl);
   traverse(&dl);
    return 0;
}
