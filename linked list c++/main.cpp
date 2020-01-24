#include <iostream>
#include <bits/stdc++.h>
#include "List.h"

using namespace std;

int main()
{
   List l;
   l.AddNodeAtEnd(1);
   l.AddNodeAtEnd(2);
   l.AddNodeAtEnd(3);
   l.AddNodeAtEnd(4);
   l.AddNodeAtEnd(5);
   l.printlist();
   l.deletenode(5);
   l.deletenode(1);
   l.printlist();
    return 0;
}
