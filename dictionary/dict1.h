/*#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef int entryv;
typedef int entryk;
typedef struct nde{
   entryk key;
   entryv value;
   struct nde *next;
}ndes;

typedef struct{
 ndes* ht[MAX];
}d;

void createdict(d *d1);

void add(d *d1,entryk k,entryv v);

void traverse(d *d1);

int removebykey(d *d1,entryk k,entryv v);

int modify(d *d1,entryk k,entryv v,entryv nv);

int searchbykey(d *d1,entryk k);

