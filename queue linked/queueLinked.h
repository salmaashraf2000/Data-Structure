typedef int QueueEntry;

typedef struct node{
   QueueEntry item;
   struct node *next;
}Node;

typedef struct{
  Node *Front;
  Node *rear;
  int Size;
}Queue;


void CreateQueue(Queue *q);

void ClearQueue(Queue *q);

int QueueSize(Queue *q);

int QueueFull(Queue *q);

int QueueEmpty(Queue *q);

void Append(Queue *q,QueueEntry e);

void Delete(Queue *q,QueueEntry *e);

void traverseQueue(Queue *q,void (*print)(QueueEntry));

void copyQueue(Queue *q,Queue *q1);
