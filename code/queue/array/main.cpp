#include <iostream>

#define maxq 4
using namespace std;
struct queue
{
  int front;
  int rear;
  int count;
  int data[maxq];
};
queue Q;
void
init (queue * Z)
{
  Z->front = 0;
  Z->rear = 0;
  Z->count = 0;
}

void
enqueue (queue * a, int nilai)
{
  if (a->count == maxq)
    {
      cout << "wah sudah penuh";
    }
  else
    {
      a->data[a->rear] = nilai;
      a->rear = (a->rear + 1) % maxq;
      a->count++;
    }
}

void
dequeue (queue * a)
{
  if (a->count <= 0)
    {
      cout << "ngga ada yang antri";
    }
  else
    {
      cout << "memanggil antrian no " << a->data[a->front] << "\n";
      a->front = (a->front + 1) % maxq;
      a->count--;
    }
}

void printQueue(queue* a)
{
  if (a->count <= 0)
  {
    cout << "Antrian kosong" << endl;
  }
  else
  {
    cout << "Isi antrian: ";
    int index = a->front;
    for (int i = 0; i < a->count; i++)
    {
      cout << a->data[index] << " ";
      index = (index + 1) % maxq;
    }
    cout << endl;
  }
}


int
main ()
{

  init (&Q);
  enqueue (&Q, 10);
  enqueue (&Q, 5);
  enqueue (&Q, 11);
  enqueue (&Q, 15);
  dequeue (&Q);
  dequeue (&Q);
  enqueue (&Q, 12);
  enqueue (&Q, 14);
  dequeue (&Q);
  printQueue(&Q);
  return 0;
}