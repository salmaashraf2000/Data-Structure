#include <iostream>
#include "List.h"
#include <bits/stdc++.h>
using namespace std;

List::List():head{NULL}, current{NULL},temp{NULL}
{

}

void List::AddNodeAtEnd(int adddata)
{
    nodeptr n=new node;
    n->next=NULL;
    n->data=adddata;
    if(head!=NULL){
        current =head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=n;
    }else{
        head=n;
    }

}

void List::deletenode(int deldata)
{
  nodeptr delptr=NULL;
  temp=head;
  current=head;
  while(current!=NULL && current->data!=deldata){
       temp=current;
       current=current->next;
  }
  if(current==NULL){
    cout<<deldata<<" is not in list\n"<<endl;
    delete delptr;
  }else{
    delptr=current;
    current=current->next;
    temp->next=current;
    if(delptr==head){
        head=head->next;
        temp= NULL;
    }
    delete delptr;
    cout<<deldata<<" was deleted\n";
  }
}

void List::printlist()
{
   current=head;
   while(current!=NULL){
     cout<<current->data<<endl;
     current=current->next;
   }
}
