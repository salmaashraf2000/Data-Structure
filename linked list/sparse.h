
typedef int entry;

typedef struct no{
  int row;
  int column;
  entry item;
  struct no *next;
}NODE;

typedef NODE *slist;

void createslist(slist *l);

void insertslist(slist *l,int r,int c,entry info);

void printslist(slist *l);
