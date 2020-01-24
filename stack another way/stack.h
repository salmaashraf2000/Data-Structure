#define Empty -1

typedef char entry_type;
typedef struct stk *Stack;

 struct stk{
  int capacity;
  entry_type *Array;
  int top_stack;
};


int isEmpty(Stack s);

int isFull(Stack s);

Stack createStack(int Size);

void destroyStack(Stack s);

void push(entry_type x,Stack s);

entry_type top(Stack s);

void pop(Stack s);

