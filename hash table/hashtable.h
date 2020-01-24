#include <iostream>
#include <bits/stdc++.h>

#ifndef HASHTABLE_H
#define HASHTABLE_H

using namespace std;

class hashtable
{
    private:
        static const int tablesize=5;

        struct item{
            string name;
            string drink;
            item *next;
        };
        item* ht[tablesize];
    public:
        hashtable();
        int Hashfun(string key);
        void additem(string name,string drink);
        int NumberOfItemsInIndex(int index);
        void printtable();
        void PrintItemsInIndex(int index);
        void findByKey(string key);
        void removeItem(string key);

};

#endif // HASHTABLE_H
