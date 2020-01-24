#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


/*void copystack(Stack *s,Stack *nw){
  Stack temp;
  CreateStack(&temp);
  while(!StackEmpty(s)){
    entry ch;
    ch=Pop(s);
    Push(ch,&temp);
  }
  while(!StackEmpty(&temp)){
    entry ch;
    ch=Pop(&temp);
    Push(ch,nw);
    Push(ch,s);
  }

}

entry First(Stack *s){
    entry item;
     Stack temp;
     CreateStack(&temp);
  while(!StackEmpty(s)){
    item=Pop(s);
    Push(item,&temp);
  }
  while(!StackEmpty(&temp)){
    entry c=Pop(&temp);
    Push(c,s);
 }
  return item;
}

entry Last(Stack *s){
  entry c= Pop(s);
  Push(c,s);
 return c;
}

void Destroy(Stack *s){
 while(!StackEmpty(s)){
    Pop(s);
 }
}

int Size(Stack *s){
    int cnt=0;
    Stack temp;
    CreateStack(&temp);
  while(!StackEmpty(s)){
    entry c=Pop(s);
    Push(c,&temp);
    cnt++;
 }

 while(!StackEmpty(&temp)){
    entry c=Pop(&temp);
    Push(c,s);
 }

 return cnt;
}


void display(Stack *s){
    int i=StackSize(s)-1;
  while(i>=0){
    printf("%c\n",element(s,i));
    i--;
  }
}*/

int main()
{
    int arr[5];
    arr[0]=4;
    arr[1]=3;
    arr[2]=2;
    arr[3]=8;
    arr[4]=10;
    arr[5]=877;
    for(int i=0;i<6;i++){
        printf("%d\n",arr[i]);
    }
  /* Stack s;
   Stack t;
   CreateStack(&s);
   CreateStack(&t);
   entry student,teacher;
   int n=1;
   while(1){
        printf("choose selection\n");
    scanf("%d",&n);
    if(n==1){
        scanf("%d %d %d %d",&student.id,&student.data.birth.day,&student.data.birth.month,&student.data.birth.year);
        Push(student,&s);
    }else if(n==2){
        entry s1;
        s1=Pop(&s);
        printf("id: %d  day: %d month: %d year: %d\n",s1.id,s1.data.birth.day,s1.data.birth.month,s1.data.birth.year);
    }else if(n==3){
        scanf("%d %f",&teacher.id,&teacher.data.salary);
        Push(teacher,&t);
    }else if(n==4){
        entry t1;
        t1=Pop(&t);
        printf("id: %d salary: %f\n",t1.id,t1.data.salary);
    }else{
        break;
    }
   }




















   /*while(!StackFull(&s)){
    ch=getchar();
    Push(ch,&s);
    fflush(stdin);
   }
   CreateStack(&nw);
   //copystack(&s,&nw);
   //Copystack(&s,&nw);
   printf("\n\n\n");
  /*while(!StackEmpty(&nw)){      void version of pop
    char chh;
    Pop(&chh,&nw);
    printf("%c\n",chh);
  }*/
   /*while(!StackFull(&s)){
    ch=getchar();
    Push(ch,&s);
    fflush(stdin);
   }
   Push('p',&s);

   display(&s);
   printf("%d\n",Size(&s));
   printf("%c\n",Last(&s));
   printf("%c\n",First(&s));
   Destroy(&s);
   printf("%d\n",StackSize(&s));
   /*while(!StackEmpty(&s)){
    ch = Pop(&s);
    putchar(ch);
   }

   //Stack temp;
   //Stack ns;
   //StackEmpty(&s);
   //CreateStack(&ns);
   //CreateStack(&temp);
   //Push('a',&s);
   //Push('b',&s);
   //Push('c',&s);
/*   char ch;
   ch=getchar();
   while(!StackFull(&s)){
    Push(ch,&s);
    ch=getchar();
   }
  // copystack(&s,&temp,&ns);
   while(!StackEmpty(&s)){
    StackTop(&s);
    Pop(&s);
   }
   //printf("%c\n",firstele(&s));
   //printf("%c\n",lastele(&s));
  /* char item;
   item=getchar();
   while(!StackFull(&s) && item!='\n'){
     Push(&item,&s);
     scanf("%c",&item);

   }
   while(!StackEmpty(&s)){
     Pop(&item,&s);
     printf("%c\n",item);

   }
   Push('s',&s);
   Push('a',&s);
   Push('l',&s);
   Push('m',&s);
   Push('a',&s);
   Push('t',&s);
   if(!StackEmpty(&s)){
    StackTop(&s);
   }else{
    printf("stack is empty\n");
   }

   Pop(&s);
  printf("%d\n",StackSize(&s));
   while(!StackEmpty(&s)){
    StackTop(&s);
    Pop(&s);
   }else{
    printf("stack is empty\n");
   }

   //printf("%d\n",StackSize(&s));
   Pop(&s);
   Pop(&s);

   if(!StackEmpty(&s)){
    Pop(&s);
   }else{
    printf("stack is empty\n");
   }*/

    return 0;
}

/*void brackets(){
   Stack s;
   CreateStack(&s);
   int flag=0,i=0;
   char ch[100],c;
   scanf("%s",&ch);

   for(i=0;i<strlen(ch);i++){

    if(StackEmpty(&s) && ch[i]=='}'){
        flag=1;
    }
    if(ch[i]=='{'){
        Push(ch[i],&s);
    }else if(!StackEmpty(&s)){
        c=Pop(&s);
    }
   }
   if(StackEmpty(&s) && flag==0){
    printf("balanced\n");
   }else{
    printf("unbalanced\n");
   }
}*/

