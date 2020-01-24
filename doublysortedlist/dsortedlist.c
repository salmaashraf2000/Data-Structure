#include "dsortedlist.h"
#include <stdio.h>
#include <stdlib.h>

void createDList(sortlist *l){
  l->head=NULL;
  l->Size=0;
}

void Insert(sortlist *l,entry e){
  node *p=(node *)malloc(sizeof(node));
  p->item=e;
  p->prev=NULL;
  p->next=NULL;
  if(l->head==NULL){
    l->head=p;
  }else{
     if(l->head->item.key>e.key){
        p->next=l->head;
        l->head->prev=p;
        l->head=p;
     }else{
     /* if(l->Size==1){
         p->prev=l->head;
         l->head->next=p;
      }else{*/
        node *current=l->head;
      while(current->next!=NULL && current->next->item.key<e.key){
         current=current->next;
      }
      if(current->next!=NULL){
         current->next->prev=p;
         p->next=current->next;
         p->prev=current;
         current->next=p;
      }else{
       current->next=p;
       p->prev=current;
      }
     //}
     }
  }
  l->Size++;

}


void traverse(sortlist *l){
    node *current=l->head;
   while(current!=NULL){
     printf("%d %c\n",current->item.key,current->item.info);
     current=current->next;
   }
}


void destroy(sortlist *l){
  node *temp;
  while(l->head){
    temp=l->head;    l->head=l->head->next;
    free(temp);
  }
}
//case of key not found ????!!!! not handled
void retrieve(sortlist *l,int k,entry *e){
    node *temp;
    if(l->head->item.key==k){
    temp=l->head;
    *e=temp->item;
    if(l->Size==1){
        l->head=NULL;
        l->Size--;
        return;
    }
    temp->next->prev=NULL;
    l->head=temp->next;
    free(temp);
   }else{
    node *current=l->head;
    while(current->next!=NULL){
        if(current->item.key==k){
            break;
        }
        current=current->next;
    }
    if(current->next!=NULL){
        temp=current;
        *e=temp->item;
        current->prev->next=current->next;
        current->next->prev=current->prev;
        free(temp);
    }else{
        temp=current;
        *e=temp->item;
        current->prev->next=NULL;
        //current->prev=NULL;
        free(temp);
    }
   }
   l->Size--;
}
