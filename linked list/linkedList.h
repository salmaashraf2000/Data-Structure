typedef int entry;

typedef struct linked{
  entry item;
  struct linked *next;
}node;

typedef struct{
  node *head;
  int Size;
}List;

void createlist(List *l);

void insertList(List *l,entry e,int pos);

int fullList(List *l);

int emptyList(List *l);

void deleteElement(List *l,entry *e,int pos);

void clearList(List *l);

void retrieve(List *l,entry *e,int pos);

void replaceElement(List *l,entry e,int pos);

void traverseList(List *l,void (*print)(entry));

void ispresent(List *l,int pos);


