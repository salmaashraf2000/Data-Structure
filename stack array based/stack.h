#define MAX 20


typedef struct{
  int id;
  union{
    float salary;
    struct{
       int day;
       int month;
       int year;
    }birth;
  }data;
}entry;

typedef struct{
  int top;
  entry arr[MAX];
}Stack;

void CreateStack(Stack *s);
void Push(entry item,Stack *s);
entry Pop(/*char *item,*/Stack *ptrs);
//void Pop(char *item,Stack *ptrs);
int	StackEmpty(Stack *s);
int	StackFull(Stack *ptrs);
void StackTop(Stack *ptrs);
int	StackSize(Stack *ptrs);
void ClearStack(Stack *ptrs);
entry firstele(Stack *s);
entry lastele(Stack *s);
void Copystack(Stack *s,Stack *nw);
entry element(Stack *s,int i);
