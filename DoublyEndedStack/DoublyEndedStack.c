#include <stdio.h>
#include <stdlib.h>
#include "DoublyendedStack.h"

void createDoublyEnded(Doublyended *d){
   d->topbottom=NULL;
   d->topup=NULL;
   d->Size=0;
}

void Pushup(Doublyended *d,entry item){
    Node *s=(Node*)malloc(sizeof(Node));
    s->info=item;
    s->next=d->topup;
    d->topup=s;
    d->Size++;
}

void Pushbottom(Doublyended *d,entry item){
   Node *s=(Node*)malloc(sizeof(Node));
   s->info=item;
    s->next=d->topbottom;
    d->topbottom=s;
    d->Size++;
}

void Popup(Doublyended *d,entry *item){
   if(!Empty(d)){
   Node *temp;
    temp=d->topup;
    *item=temp->info;
    d->topup=temp->next;
    free(temp);
   /*if(d->Size==1){
     d->topup=NULL;
   }*/
    d->Size--;
  }else{
   printf("empty\n");
  }
}

void Popbottom(Doublyended *d,entry *item){
   if(!Empty(d)){
   Node *temp;
    temp=d->topbottom;
    *item=temp->info;
    d->topbottom=temp->next;
    free(temp);
    /*if(d->Size==1){
     d->topbottom=NULL;
     }*/
    d->Size--;
   }else{
    printf("empty\n");
   }
}

int full(Doublyended *d){
 return d->Size==MAX;
}

int Empty(Doublyended *d){
 return (d->topbottom==NULL && d->topup==NULL);
}

