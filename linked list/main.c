#include <stdio.h>
#include <stdlib.h>
#include "llist.h"
#include "sparse.h"

//#include "linkedList.h"
//#include "list.h"
//check if list is empty in order not to delete
void print(entry c){
 printf("element :%d\n",c);
   //printf("%s %d %s %d %d %d %d %s %d %s %d %s\n",c.name,c.home.hstreet,c.home.hcity,c.home.hzip,c.date.day,c.date.month,c.date.year,c.company.cname,c.company.caddress.cstreet,c.company.caddress.ccity,c.company.caddress.czip,c.company.phone);

}

/*void joinList(List *l,List *l1){
    entry e;
    while(){
     retrieve();
    }
}*/

/*void ispresent(List *l,int pos){

}*/

void join(List *l,List *l1,List *l2){
     entry e;
     int i=0,j=0;
     while(!emptyList(l)){
        deleteElement(l,&e,0);
        insertList(l2,e,j);
        i++;
        j++;
     }
     i=0;
      while(!emptyList(l1)){
        deleteElement(l1,&e,0);
        insertList(l2,e,j);
        i++;
        j++;
     }

}

//salma 15 cairo 147 27 3 2000 face 78 london 147 0112
//noor 19 cairo 147 27 3 2000 face 78 london 147 0112
int main()
{
   List l,l1,l2;
   entry e;
   createlist(&l);
   insertList(&l,1,0);
    insertList(&l,2,1);
     insertList(&l,3,2);
     createlist(&l1);
   insertList(&l1,4,0);
    insertList(&l1,5,1);
     insertList(&l1,6,2);
     createlist(&l2);
    // ispresent(&l,0`);
    // deleteElement(&l,&e,0);
     //replaceElement(&l,4,1);
     join(&l,&l1,&l2);
     traverseList(&l2,print);
   /*List l,l1;
   createlist(&l);
   entry c;
  scanf("%s %d %s %d %d %d %d %s %d %s %d %s",c.name,&c.home.hstreet,c.home.hcity,&c.home.hzip,&c.date.day,&c.date.month,&c.date.year,c.company.cname,&c.company.caddress.cstreet,c.company.caddress.ccity,&c.company.caddress.czip,c.company.phone);
  insertList(&l,c,0);
   scanf("%s %d %s %d %d %d %d %s %d %s %d %s",c.name,&c.home.hstreet,c.home.hcity,&c.home.hzip,&c.date.day,&c.date.month,&c.date.year,c.company.cname,&c.company.caddress.cstreet,c.company.caddress.ccity,&c.company.caddress.czip,c.company.phone);
   insertList(&l,c,1);
   deleteElement(&l,&c,0);
   deleteElement(&l,&c,0);

   //deleteElement(&l,&c,1);
   deleteElement(&l,&c,0);

   //deleteElement(&l,&c,1);
   traverseList(&l,&print);*/
   /*entry e;
   createlist(&l1);
   insertList(&l,5,0);
   insertList(&l,10,1);
   insertList(&l,15,2);
   //replaceElement(&l,8,2);
    ispresent(&l,1);
   traverseList(&l,&print);
   /*insertList(&l1,1,0);
   insertList(&l1,2,1);
   insertList(&l1,3,2);
   insertList(&l1,4,3);
   insertList(&l1,5,4);
   traverseList(&l,&print);
   deleteElement(&l,&e,0);
   printf("retrieved element %d\n",e);
   printf("\n\n");
   traverseList(&l,&print);
   clearList(&l);
   traverseList(&l,&print);
   //retrieve(&l,&e,1);
   //retrieve(&l,&e,0);*/
   sparse();
    return 0;
}

void sparse(){
 slist l;
 createslist(&l);
 int a[5][5]={1,0,0,5,7,  0,0,0,0,4,   0,0,0,0,0,  60,8,0,0,0,   35,0,2,47,0};
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i][j]!=0){
            insertslist(&l,i,j,a[i][j]);
        }
    }
 }
 printslist(&l);
}
