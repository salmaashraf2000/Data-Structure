#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "global.h"
#include "stack.h"



/*Entry Last(Queue *q){
    Entry ch,e;
    Queue temp;
    createQueue(&temp);
    int s=queueSize(q),i=0;
  while(i<s){
    dequeue(&ch,q);
    enqueue(ch,&temp);
    if(i==s-1){
       e=ch;
    }
    i++;
  }
  i=0;
  while(i<s){
    dequeue(&ch,&temp);
    enqueue(ch,q);
    i++;
  }

  return e;
}

Entry First(Queue *q){
   Entry ch,retrn;
   Queue temp;
   createQueue(&temp);
   if(!isempty(q)){
    dequeue(&ch,q);
    enqueue(ch,&temp);
    retrn=ch;
    int s=queueSize(q),i=0;
    while(i<s){
       dequeue(&ch,q);
       enqueue(ch,&temp);
       i++;
    }
    i=0;
    while(i<s+1){
       dequeue(&ch,&temp);
       enqueue(ch,q);
       i++;
    }
   }else{
     retrn=NULL;
   }
   return retrn;
}

void Destroy(Queue *q){
  int s=queueSize(q);
  Entry ch;
    while(s>0){
        dequeue(&ch,q);
        s--;
    }
}

int Size(Queue *q){
  int cnt=0;
  Queue temp;
  Entry ch;
  createQueue(&temp);
    while(!isempty(&q)){
       dequeue(&ch,q);
       enqueue(ch,&temp);

       cnt++;
    }

    while(!isempty(&temp)){
       dequeue(&ch,&temp);
       enqueue(ch,q);

    }
    return cnt;
}

void CopyQueue(Queue *q,Queue *nq){
    int s= queueSize(q),i=0;
    Entry ch;
    Queue temp;
    createQueue(&temp);
    while(i<s){
        dequeue(&ch,q);
        enqueue(ch,nq);
        enqueue(ch,&temp);
        i++;
    }
    i=0;
    while(i<s){
        dequeue(&ch,&temp);
        enqueue(ch,q);
        i++;
    }
}

void groupcodes(){
   Queue q,q1,q2;
   createQueue(&q);
   createQueue(&q1);
   createQueue(&q2);
   Entry ch,c,nw;
   int section,group;
   printf("enter section codes\n");
   while(!isfull(&q)){
     scanf("%d",&section);
     enqueue(section,&q);
   }
    printf("enter group codes\n");
   while(!isfull(&q1)){
     scanf("%d",&group);
     enqueue(group,&q1);
   }
   while(!isempty(&q)){
    dequeue(&ch,&q);
    dequeue(&c,&q1);
    nw= (ch*10)+c;
    enqueue(nw,&q2);
   }
   traverse(&q2);
}*/

/*void copyQinS(Queue *nq,Stack *s){
    while(!isempty(nq)){
        Entry c;
        dequeue(&c,nq);
        Push(c,s);
    }
}*/

int main()
{
    Queue nq,q;
   createQueue(&nq);
   createQueue(&q);
    enqueue(1,&q);
   enqueue(2,&q);
   enqueue(3,&q);
   enqueue(4,&q);
   enqueue(5,&q);
   enqueue(6,&q);
   enqueue(7,&q);
   Copy(&q,&nq);
   traverse(&nq);
   /*Destroy(&q);
   Queue nq;
   createQueue(&nq);
   CopyQueue(&q,&nq);
   printf("%c last element\n",Last(&q));
   printf("%c first element\n",First(&q));
   traverse(&q);
   enqueue('p',&q);
   while(!isempty(&q)){
     dequeue(&ch,&q);
     printf("%c\n",ch);
   }
   printf("%d\n",queueSize(&q));
   /*enqueue('a',&q);
   enqueue('b',&q);
   enqueue('c',&q);
   enqueue('d',&q);
   enqueue('e',&q);
   enqueue('f',&q);
   enqueue('g',&q);
   printf("%d\n",queueSize(&q));
   traverse(&q);
   printf("\n\n");
   char ch;
   dequeue(&ch,&q);
   printf("%c deleted\n",dequeue(&q));
   printf("%c deleted\n",ch);
   dequeue(&ch,&q);
   printf("%c deleted\n",ch);
   traverse(&q);
   printf("first %c\n",frontElement(&q));
   printf("last %c\n",lastElement(&q));
   printf("%d is size of queue\n",queueSize(&q));

   */
    return 0;
}

/*void customerService(){
    Queue q;
    createQueue(&q);
    Entry customer;
    while(1){
        printf("choose a selection\n");
        printf("1. Add a New Customer\n2. Serve a Customer.\n3. Display Customers Information.\n4. Display Customers information in the \"most-recent\" Order.\n5. Exit menu\n");
        int no;
        scanf("%d",&no);
        if(no==1){
           printf("enter name and id\n");
           scanf("%s %d",customer.name,&customer.id);
           if(!isfull(&q)){
            enqueue(customer,&q);
           }else{
            printf("queue is full\n");
           }
        }else if(no==2){
           dequeue(&customer,&q);
           printf("name: %s id: %d \n",customer.name,customer.id);
        }else if(no==3){
           traverse(&q);
        }else if(no==4){
           Queue nq;
           createQueue(&nq);
           Copy(&q,&nq);
           Stack s;
           CreateStack(&s);
           copyQinS(&nq,&s);
           traverseStack(&s);
        }else{
          break;
        }

    }

}

/*void readoneline(){
   int exact=1,mirror=1,colon=0,rlen=0,llen=0;
   Entry ch ='\0';
   Stack s;
   Queue q;
   createQueue(&q);
   CreateStack(&s);
   while(ch!='\n'){
      ch = getchar();
      if(ch=='\n'){
        break;
      }
      if(ch==':'){
        colon=1;
      }
      if(colon==0){
        rlen++;
        Push(ch,&s);
        enqueue(ch,&q);
      }else if(colon==1 && ch!=':'){
        Entry cmp;
        llen++;
        if(!StackEmpty(&s) && mirror==1){
          cmp=Pop(&s);
        }
        if(cmp!=ch){
            mirror=0;
        }
        if(!isempty(&q) && exact==1){
           dequeue(&cmp,&q);
        }
        if(cmp!=ch){
          exact=0;
        }
      }
   }
   printf("%c",!colon ? 'N': rlen>llen ? 'L' : llen>rlen ? 'R' : mirror ? 'M' : exact ? 'S' : 'D');
}*/
