#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print(entry item){
  printf("%c\n",item);
}

int main()
{
   List l;
   createlist(&l);
   entry item;
   int i=0;
   while(!isfull(&l)){
    item =getchar();
    Insert(&l,item,i++);
    fflush(stdin);
   }
   traverse(&l,print);  //or  traverse(&l,&print); as name of function is address like array
   printf("%c\n",first(&l));
   printf("%c\n",last(&l));
   /*Insert(&l,'s',0);
   Insert(&l,'l',1);
   Insert(&l,'a',1);
   Insert(&l,'m',3);
   Delete(&l,2,&item);
   traverse(&l);
   printf("%d\n",ListSize(&l));
   Replace(&l,0,'p');
   traverse(&l);*/
    return 0;
}


