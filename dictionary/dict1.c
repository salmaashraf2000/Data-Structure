/*#include <stdio.h>
#include <stdlib.h>
#include "dict1.h"

void createdict(d *d1){
    for(int i=0;i<MAX;i++){
        d1->ht[i]=NULL;
    }
}

void add(d *d1,entryk k,entryv v){
  ndes *n=(ndes *)malloc(sizeof(ndes));
  ndes *p;
  n->key=k;
  n->value=v;
  n->next=NULL;
  int flag=0,i=0;
  while(i<MAX){
    if(d1->ht[i]!=NULL && d1->ht[i]->key==k){
        flag=1;
        break;
    }else if(d1->ht[i]==NULL){
        flag=2;
        break;
    }
    i++;
  }
  if(flag==1){
    ndes *tmp=d1->ht[i];
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=n;
  }else if(flag==2){
    d1->ht[i]=n;
  }
}

void traverse(d *d1){
  for(int i=0;i<MAX;i++){
    if(d1->ht[i]==NULL){
        continue;
    }else{
       ndes *n=d1->ht[i];
       while(n){
        printf("key: %d value: %d\n",n->key,n->value);
        n=n->next;
       }
    }
  }
}


int removebykey(d *d1,entryk k,entryv v){
     int flag=0,i=0;
    ndes *tmp=NULL,*n;
    while(d1->ht[i]){
    if(d1->ht[i]!=NULL){
       n=d1->ht[i];
        while(n){
            if(n->key==k && n->value==v){
              flag=1;
              break;
            }
           tmp=n;
            n=n->next;
        }
        if(flag==1){
            break;
        }
        tmp=NULL;
    }
    i++;
    }
    if(flag==1){
       if(tmp){
            tmp->next=n->next;
        }else{
          //d1->ht[i]=NULL;
          d1->ht[i]=n->next;
        }
         free(n);
    }
   return flag;
}

int modify(d *d1,entryk k,entryv v,entryv nv){
    int flag=0;
    int i=0;
    while(d1->ht[i]){
    //if(d1->ht[i]!=NULL){
        ndes *n=d1->ht[i];
        while(n){
            if(n->value==v && n->key==k){
                n->value=nv;
                flag=1;
                break;
            }
            n=n->next;
        }
        if(flag==1){
            break;
        }
   // }
    i++;
    }

   return flag;
}

int searchbykey(d *d1,entryk k){
   int flag=0;
    int i=0;
    while(d1->ht[i]){
    //if(d1->ht[i]!=NULL){
        ndes *n=d1->ht[i];
        while(n){
             if(n->key==k){
             printf("key: %d value: %d\n",n->key,n->value);
             flag=1;
            }
            n=n->next;
        }
        if(flag==1){
            break;
        }
    //}
    i++;
    }
  return flag;
}

/*if(notoneitem==1 && cnt==1){
          d1->ht[i]=n->next;
        }else */
