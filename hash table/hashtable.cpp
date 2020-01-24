#include <iostream>
#include <bits/stdc++.h>
#include "hashtable.h"

using namespace std;

hashtable::hashtable()
{
    for(int i=0;i<tablesize;i++){
        ht[i]= new item;
        ht[i]->name="empty";
        ht[i]->drink="empty";
        ht[i]->next=NULL;
    }
}



int hashtable::Hashfun(string key)
{
    int h=0,index;
    for(int i=0;i<key.length();i++){
        h+=(int)key[i];
    }
    index= h % tablesize;
    return index;
}

void hashtable::additem(string name,string drink)
{
    int index= Hashfun(name);
    if(ht[index]->name=="empty")
    {
        ht[index]->name=name;
        ht[index]->drink=drink;
    }else{
        item* ptr=ht[index];
        item* n= new item;
        n->name=name;
        n->drink=drink;
        n->next=NULL;
        while(ptr->next!=NULL){
           ptr= ptr->next;
        }
        ptr->next=n;
    }

}

int hashtable::NumberOfItemsInIndex(int index)
{
    int cnt=0;
    if(ht[index]->name=="empty"){
        return cnt;
    }else{
        cnt++;
        item* ptr= ht[index];
        while(ptr->next!=NULL){
            ptr=ptr->next;
            cnt++;
        }
    }
    return cnt;
}


void hashtable::printtable()
{
    int number;
    for(int i=0;i<tablesize;i++)
    {
        number=NumberOfItemsInIndex(i);
        if(number>1){
            cout<<"--------------------\n";
            cout<<"number of items: "<<number<<endl;
            PrintItemsInIndex(i);
            cout<<"--------------------\n";
            continue;
        }
        cout<<"--------------------\n";
        cout<<"number of items: "<<number<<endl;
        cout<<"index = "<<i<<endl;
        cout<<ht[i]->name<<" "<<ht[i]->drink<<endl;
        cout<<"--------------------\n";
    }
}

void hashtable::PrintItemsInIndex(int index)
{
    item* ptr=ht[index];
    if(ptr->name=="empty"){
        cout<<"index = "<<index<<" is empty"<<endl;
    }else{
        cout<<"index = "<<index<<" contains the following items\n"<<endl;
        while(ptr!=NULL){
            cout<<ptr->name<<" "<<ptr->drink<<endl;
            ptr=ptr->next;
        }
    }
}


void hashtable::findByKey(string key)
{
    int index=Hashfun(key);
    bool found{false};
    item* ptr=ht[index];
    string value;
    while(ptr!=NULL){
        if(ptr->name==key){
        value=ptr->drink;
            found=true;
            break;
        }
        ptr=ptr->next;
    }
    if(found==true){
        cout<<value<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}

void hashtable::removeItem(string key)
{
    int index=Hashfun(key);
    item* delptr;
    item *p1;
    item* p2;
    if(ht[index]->name=="empty"){
        cout<<"\n"<<key<<" is not found"<<endl;
    }else if(ht[index]->name==key && ht[index]->next==NULL){
             ht[index]->name="empty";
             ht[index]->drink="empty";
             cout<<"\n"<<key<<" was deleted"<<endl;
    }else if(ht[index]->name==key){
             delptr=ht[index];
             ht[index]=ht[index]->next;
             delete delptr;
             cout<<"\n"<<key<<" was deleted"<<endl;
    }else{
      p1=ht[index]->next;
      p2=ht[index];
      while(p1!=NULL && p1->name!=key){
        p2=p1;
        p1=p1->next;
      }
      if(p1==NULL){
        cout<<"\n"<<key<<" is not found"<<endl;
      }else{
         delptr =p1;
         p1=p1->next;
         p2->next=p1;
         delete delptr;
         cout<<"\n"<<key<<" was deleted"<<endl;
      }
    }
}
