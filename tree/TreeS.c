#include "TreeS.h"
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void CreateTreeS(trees *t){
   *t=NULL;
}

int EmptyS(trees *t){
  return(!*t);
}

int FullS(trees *t){
 return 0;
}


void ClearTreeS(trees *t){
 if(*t){
    ClearTreeS(&(*t)->left);
    ClearTreeS(&(*t)->right);
    free(*t);
    *t=NULL;
 }
}

int TreeSizeS(trees *t){
   if(!*t){
    return 0;
   }else{
    return (1+TreeSizeS(&(*t)->left)+TreeSizeS(&(*t)->right));
   }
}

int TreeDepthS(trees *t){
   if(!*t){
    return 0;
   }
   int a= TreeDepthS(&(*t)->left);
   int b= TreeDepthS(&(*t)->right);
   ((a>b) ? printf("a %d b %d\n",a+1,b): printf("b %d a %d\n",b+1,a));
    return ((a>b) ? a+1: b+1);
}

void postorderS(trees *t,void (*pf)(entry)){
  if(*t){
    postorderS(&(*t)->left,pf);
    postorderS(&(*t)->right,pf);
    (*pf)((*t)->item);

  }
}

void inorderS(trees *t,void (*pf)(entry)){
  if(*t){
    inorderS(&(*t)->left,pf);
    (*pf)((*t)->item);
    inorderS(&(*t)->right,pf);
  }
}

void preorderS(trees *t,void (*pf)(entry)){
   if(*t){
    (*pf)((*t)->item);
    preorderS(&(*t)->left,pf);
    preorderS(&(*t)->right,pf);
  }
}

void inorderSiterativeS(trees *t,void (*pf)(entry)){
  Stack s;
  void *p=(void*)(*t);
if(p){
     createStack(&s);
  do{
  while(p){
    // printf("%d\n",((nodes *)p)->item.value);
    Push(&s,/*(void *)*/p);
    p=(void *)(((nodes *)p)->left);
  }
   if(!EmptyStack(&s)){
     Pop(&s,&p);
     (*pf)(((nodes *)p)->item);
      p=(void*)(((nodes*)p)->right);
   }
  }while(!EmptyStack(&s) || p);
 }
}


void InsertRec(trees *t,entry *element){
  if(!*t){
    *t=(trees)malloc(sizeof(nodes));
    (*t)->item= *element;
    (*t)->left= NULL;
    (*t)->right=NULL;
  }else if(element->key<((*t)->item.key)){
   InsertRec(&((*t)->left),element);
  }else{
   InsertRec(&((*t)->right),element);
  }
}


//for the other implementation

void InsertRecAno(trees *t,entry *element,int *depth){
   if(!*t){
     *t=(trees)malloc(sizeof(nodes));
     (*t)->item= *element;
     (*t)->left= NULL;
     (*t)->right= NULL;
   }else if(element->key< ((*t)->item.key)){
     InsertRecAno(&(*t)->left,element,depth);
   }else{
     InsertRecAno(&(*t)->right,element,depth);
   }
   (*depth)++; // will increasw when every stack is closed
}


int findItemRec(trees *t,entry *element,int k){
  if(!*t){
    return 0;
  }
  if((*t)->item.key == k){
    *element= (*t)->item;
    return 1;
  }else{
    if((*t)->item.key>k){
       return findItemRec(&(*t)->left,element,k);
    }else{
       return findItemRec(&(*t)->right,element,k);
    }
  }
}

int deleteItem(trees *t,entry *element,int k){
  int found=0;
  nodes *p= *t,*r=NULL;
  while(p && !(found=(p->item.key==k))){
    r=p;
    if(p->item.key>k){
        p=p->left;
    }else{
        p=p->right;
    }
  }
  if(found){
    *element=p->item;
    if(!r){
      DeleteNode(t);
    }else if(k<r->item.key){
      DeleteNode(&r->left);
    }else{
      DeleteNode(&r->right);
    }
  }
  return found;
}

void DeleteNode(trees *t){
   nodes *q=(*t),*r;
   if(!(*t)->left){
      (*t)=(*t)->right;
   }else if(!(*t)->right){
      (*t)=(*t)->left;
   }else{
       q=(*t)->left;
     if(!q->right){
        (*t)->item=q->item;
        (*t)->left=q->left;
     }else{
        do{
           r=q;
           q=q->right;
        }while(q->right);
        (*t)->item=q->item;
        r->right=q->left;
     }
   }
   free(q);
}


void increaseby1(trees *t){
  if(*t){
    (*t)->item.value++;
    increaseby1(&((*t)->left));
    increaseby1(&((*t)->right));
  }
}


/*void increaseby1(trees *t,void (*pp)(entry*)){
   if(*t){
    (*pp)(&(*t)->item);
    increaseby1(&(*t)->left,pp);
    increaseby1(&(*t)->right,pp);
   }

}*/

int search(trees *t,int tosearch){
   if(*t){
    if(((*t)->item.value)== tosearch){
       return 1;
    }else if(((*t)->item.value)> tosearch){
       return search(&(*t)->left,tosearch);
    }else{
        return search(&(*t)->right,tosearch);
    }
   }
   return -1;
}


int Searchtree(trees *t,int v){
    if(!*t){
        return 0;
    }
    if(((*t)->item.key)==v){
        return 1;
    }
    return (Searchtree(&(*t)->left,v) || Searchtree(&(*t)->right,v));

  return 0;
}



int countLeaves(trees *t){
 if((*t)){
 if(!(*t)->left && !(*t)->right){
    return 1;
 }
 return (countLeaves(&(*t)->left) + countLeaves(&(*t)->right) );
}
 return 0;
}



nodes * closestBST(trees *t, int val){
    if(*t){
    if(((*t)->item.value) == val)
        return (*t);
    if(val < (*t)->item.value ){
        if(!(*t)->left)
            return (*t);
        nodes * p = closestBST(&(*t)->left, val);
        printf("left %d %d %d\n",p->item.value,(*t)->item.value,abs(p->item.value-val) > abs((*t)->item.value -val) ? (*t)->item.value : p->item.value);
        return abs(p->item.value -val) > abs((*t)->item.value -val) ? (*t) : p;
    }else{
        if(!(*t)->right)
            return (*t);
        nodes * p = closestBST(&(*t)->right, val);
        printf("right %d %d %d\n",p->item.value,(*t)->item.value,abs(p->item.value-val) > abs((*t)->item.value -val) ? (*t)->item.value : p->item.value);
        return abs(p->item.value-val) > abs((*t)->item.value -val) ? (*t) : p;
    }
    }
    return NULL;
}

int searchbinary(trees *t,int k){
  if(*t){
     if((*t)->item.value==k){
        return 1;
     }
    int l=searchbinary(&(*t)->left,k);
    return l;
    int r=searchbinary(&(*t)->right,k);
    return r;
  }
}

void traverseLevel(trees *t,void (*visit)(entry)){

    Queue q;
    CreateQueue(&q);
    nodes *n=(*t);
    Append(&q,n);
    while(!QueueEmpty(&q)){
        Delete(&q,n);
        (*visit) (n->item);
        if(n->left){
           Append(&q,(n->left));
          // printf("left %d\n",n->left->item.value);
        }if(n->right){
            Append(&q,(n->right));
            // printf("right %d\n",n->right->item.value);
        }
    }
}
/////////////////////////////////////////

void CreateQueue(Queue *q){
  q->Front=NULL;
  q->rear=NULL;
  q->Size=0;
}

void Append(Queue *q,nodes *e){ //better to make function return 0 or 1 if allocation is done successfully
  Node *p=(Node *)malloc(sizeof(Node));
  p->item= *e;
  p->next=NULL;
  if(q->rear==NULL){
    q->Front=p;
  }else{
    q->rear->next=p;
  }
  q->rear=p;
  q->Size++;
}

void Delete(Queue *q,nodes *e){
  Node *p=q->Front;
  *e=p->item;
  q->Front=p->next;
  free(p);
  if(q->Front==NULL){
    q->rear=NULL;
  }
  q->Size--;
}


int QueueEmpty(Queue *q){
 return (q->Front==NULL);
}


/////////////////////////////////////

void createStack(Stack *s){
  s->top=NULL;
  s->Size=0;
}

int EmptyStack(Stack *s){
  return (s->top==NULL);
}

int FullStack(Stack *s){
 return 0;
}

void Push(Stack *s,void *e){
  n *nn=(n *)malloc(sizeof(n));
  nn->item= e;
  nn->next=s->top;
  s->top=nn;
  s->Size++;
}

void Pop(Stack *s,void **e){
  n *p;
  *e=s->top->item;
  p=s->top;
  s->top=s->top->next;
  free(p);
  s->Size--;
}





int countfullnode(trees *t){
    int res=0;
   if(*t){

     if((*t)->left!=NULL && (*t)->right!=NULL){
        res++;
     }
     res+= (countfullnode((&(*t)->left))+countfullnode((&(*t)->right)));
   }
   return res;
}





