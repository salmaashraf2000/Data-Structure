#define MAX 6

typedef int entry;


typedef struct n{
  entry info;
  struct n *next;
}Node;

typedef struct{
  Node *topup;
  Node *topbottom;
  int Size;
}Doublyended;

void createDoublyEnded(Doublyended *d);

void Pushup(Doublyended *d,entry item);

void Pushbottom(Doublyended *d,entry item);

int full(Doublyended *d);

int Empty(Doublyended *d);

void Popup(Doublyended *d,entry *item);

void Popbottom(Doublyended *d,entry *item);


