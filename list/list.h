#define MAX 3

typedef char entry;

typedef struct{
  entry arr[MAX];
  int Size;
}List;


void createlist(List *l);

int isfull(List *l);

int isempty(List *l);

void Insert(List *l,entry item,int position); //can insert till current size as there should not be holes in list

void Delete(List *l,int p,entry *e);

void destroy(List *l);

int ListSize(List *l);

void traverse(List *l,void (*ptr)(entry));

void retrieve(List *l,int p,entry *e);

void Replace(List *l,int p,entry e);

entry first(List *l);

entry last(List *l);
