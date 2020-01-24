#include <iostream>
#include <bits/stdc++.h>
#include "hashtable.h"

using namespace std;

int main()
{
    hashtable Hashy;
    Hashy.additem("Paul", "Locha");
	Hashy.additem("Kim", "Iced Mocha");
	Hashy.additem("Emma", "Strawberry Smoothie");
	Hashy.additem("Annie", "Hot Chocolate");
	Hashy.additem("Sarah", "Passion Tea");
	Hashy.additem("Pepper", "Caramel Mocha");
	Hashy.additem("Mike", "Chai Tea");
	Hashy.additem("Steve", "Apple Cider");
	Hashy.additem("Bill", "Root Beer");
	Hashy.additem("Marie", "Skinny Latte");
	Hashy.additem("Susan", "Water");
	Hashy.additem("Joe", "Green Tea");
    Hashy.printtable();
    //Hashy.findByKey("paul");
    Hashy.removeItem("Paul");
    Hashy.removeItem("Kim");
    Hashy.printtable();
    return 0;
}
