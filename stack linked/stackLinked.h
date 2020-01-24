typedef int StackEntry;

typedef struct node{
    StackEntry item;
    struct node *next;
}Node;


typedef struct{
  Node *top;
  int Size;
}Stack;

void createStack(Stack *s);

int EmptyStack(Stack *s);

int FullStack(Stack *s);

void Push(Stack *s,StackEntry e);

void Pop(Stack *s,StackEntry *e);

void clearStack(Stack *s);

void traverse(Stack *s,void (*print)(StackEntry));

int SizeStack(Stack *s);

StackEntry top(Stack *s);

StackEntry Firstelement(Stack *s);

