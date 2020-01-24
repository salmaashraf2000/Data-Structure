#ifndef LIST_H
#define LIST_H
#include "List.h"

class List
{
    private:
        typedef struct node{
         int data;
         node *next;
        }* nodeptr;
        nodeptr head;
        nodeptr current;
        nodeptr temp;
    public:
        List();
        void AddNodeAtEnd(int adddata);
        void deletenode(int deldata);
        void printlist();

};

#endif // LIST_H
