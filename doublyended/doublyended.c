/*#include "doublyended.h"

void createDoublyEnded(Doublyended *d){
 d->topbottom=0;
 d->topup=MAX-1;
}

void Pushup(Doublyended *d,entry item){
  if(!full(d)){
    d->arr[d->topup--]=item;
  }else{
    printf("full\n");
  }
}

void Pushbottom(Doublyended *d,entry item){
  if(!full(d)){
    d->arr[d->topbottom++]=item;
  }else{
     printf("full\n");
  }
}

int full(Doublyended *d){
   return (d->topup==d->topbottom-1);
}


int Empty(Doublyended *d){
  return (d->topbottom==0 && d->topup==MAX-1);
}

 void PopUp (Doublyended *d,entry *item) {

 }
5
4
3
2
1
0
*/
