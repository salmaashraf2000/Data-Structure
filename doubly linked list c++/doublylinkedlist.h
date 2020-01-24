#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "doublylinkedlist.h"


class doublylinkedlist
{
   private:
    struct node{
       int data;
       node *next;
       node *prev;
    };
    node *head;
    node *tail;
    //node *nw;

    public:
        doublylinkedlist();
        void addnode(int data)
        void InsertAtPos(int data,int pos);
        void RemoveLastNode(int data);
};

#endif // DOUBLYLINKEDLIST_H
