#include "doublylinkedlist.h"

doublylinkedlist::doublylinkedlist():head{NULL},tail{NULL}
{
    //ctor
}


void doublylinkedlist:: addnode(int data)
{
  node *n=new node;
  n->next=NULL;
  n->data=data;
  n->prev=NULL;
  if(head==NULL){
    head=n;
  }else{
      node *temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
    temp->next=n;
    n->prev=temp;
  }

}

void doublylinkedlist::InsertAtPos(int data,int pos)
{
    node *n=new node;
    n->next=NULL;
    n->data=data;
    n->prev=NULL;
    if(head==NULL){
      head=n;
      return;
    }
    if(pos==0){
        n->next=head;
        head->prev=n;
        head=n;
        return ;
    }
    node *temp=head;
    for(int i=0;i<pos && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
       this->addnode(data);
       return;
    }
    n->prev=temp->prev;
    temp->prev->next= n;
    temp->prev=n;
    n->next=temp;

}

void doublylinkedlist::RemoveLastNode(int data)
{
    if(head==NULL){
        return;
    }
    node *temp=head;
    if(temp->data==data){
        head=temp->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        delete temp;
        return;
    }
    while(temp!=NULL && temp->data!=data){

    }

}
