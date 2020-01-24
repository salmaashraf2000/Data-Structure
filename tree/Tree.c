#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include "Global.h"
#include "stack.h"
void CreateTree(tree *t){
 t->root=NULL;
 t->depth=0;
 t->Size=0;
}

int Empty(tree *t){
  return (!t->root);
}

int Full(tree *t){
  return 0;
}

void postorder(tree *t,void (*pf)(entry)){
    postorderS(&t->root,pf);
}

void inorder(tree *t,void (*pf)(entry)){
  inorderS(&t->root,pf);
}

void preorder(tree *t,void (*pf)(entry)){
    preorderS(&t->root,pf);
}

void ClearTree(tree *t){
  ClearTreeS(&t->root);

}

int TreeSize(tree *t){
 return t->Size;
}

int TreeDepth(tree *t){
 return t->depth;
}

/*void inorderSiterative(tree *t,void (*pf)(entry)){
    Stack s;
    CreateStack(&s);
    void *p=(void*)(t->root);
    do{
    while(p){
    Push(p,&s);
        p=(void *)(((tree *)p)->left);
    }
    if(!StackEmpty(&s)){
        Pop(p,&s);
        (*pf)(((tree *)p)->item);
        p=(void*)(((tree*)p)->right);
    }
    }while(!StackEmpty(&s) || p);
}*/

void insertRec(tree *t,entry *element){
   int d=0;
   InsertRecAno(&(t->root),element,&d);
   if(t->depth<d){
    t->depth=d;
   }
   t->Size++;
}

void InsertIter(tree *t,entry *element){
    int d=1;
    node *p=(tree *)malloc(sizeof(node)),*curr,*prev;
    p->item= *element;
    p->left= NULL;
    p->right= NULL;
   if(!t->root){
    t->root=p;
   }else{
       curr=t->root;
     while(curr){
        prev=curr;
        if(curr->item.value > element->key){
            curr=curr->left;
        }else{
            curr=curr->right;
        }
        d++;
     }
     if(element->key<prev->item.value){
        prev->left=p;
     }else{
        prev->right=p;
     }
   }
   if(d>t->depth){
      t->depth=d;
   }
}

int finditemRecAno(tree *t,entry *element,int key){
   return findItemRec(&t->root,element,key);
}
