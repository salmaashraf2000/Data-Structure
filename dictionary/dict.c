/*#include <stdio.h>
#include <stdlib.h>
#include "dict.h"

void createdict(dict *d1){
    for(int i=0;i<MAX;i++){
        d1->ht[i]=-0;
    }
}

void add(dict *d1,int k,entry v){
  nodes *n=(nodes *)malloc(sizeof(nodes));
  n->value=v;
  n->next=NULL;
  if(d1->ht[k]==-0){
    d1->ht[k]=n;
  }else{
    nodes *tmp;
    tmp=d1->ht[k];
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=n;
  }
}

void traverse(dict *d1){
  for(int i=0;i<MAX;i++){
    if(d1->ht[i]==-0){
        continue;
    }else{
       nodes *n=d1->ht[i];
       while(n){
        printf("key: %d value: %d\n",i,n->value);
        n=n->next;
       }
    }
  }
}


int removebykey(dict *d1,int k,entry v){
    int flag=0;
    nodes *tmp;
   if(k<MAX){
    if(d1->ht[k]!=-0){
        nodes *n=d1->ht[k];
        while(n){
            if(n->value==v){
                tmp=n;
                flag=1;
                n=tmp->next;
             //   free(tmp);
                break;
            }
            n=n->next;
        }
    }
   }
   return flag;
}

int modify(dict *d1,int k,entry v,entry nv){
    int flag=0;
    if(k<MAX){
    if(d1->ht[k]!=-0){
        nodes *n=d1->ht[k];
        while(n){
            if(n->value==v){
                n->value=nv;
                flag=1;
            }
            n=n->next;
        }
    }
   }
   return flag;
}

int searchbykey(dict *d1,int k){
    int flag=0;
  if(k<MAX){
  if(d1->ht[k]!=-0 && k<MAX){
    nodes *n=d1->ht[k];
    while(n){
        printf("%d\n",n->value);
        n=n->next;
     }
    flag=1;
   }
  }
  return flag;
}*/
