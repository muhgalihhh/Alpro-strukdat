#include <iostream>
using namespace std;

typedef struct node *address;
struct node{
    int data;
    address link;
};

struct queue{
    address front;
    address rear;
};

queue y;

void init(queue *z){
    z->front=NULL;
    z->rear=NULL;
}

address alokasi(int nilai){
    address tmp=(address)malloc(sizeof(node));
    tmp->data=nilai;
    tmp->link=NULL;
    return tmp;
}
void enqueue(queue *antrian, address baru){
    if(antrian->front==NULL){
        antrian->front=antrian->rear=baru;
    }else{
        antrian->rear->link=baru;
        antrian->rear=baru;
    }
}

void dequeue(queue *x){
     if(x->front==NULL){
      cout<<"antrian kosong mas\n";   
     }else{
         address tmp=x->front;
         cout<<"kepada antrian dengan nilai "<<x->front->data<<" dipanggil\n";
         x->front=x->front->link;
         free(tmp);
     }
}

void cetak(queue q) {
    if (q.front == NULL) {
        cout << "Antrian kosong\n";
    } else {
        address current = q.front;
        cout << "Isi antrian: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->link;
        }
        cout << endl;
    }
}


int main()
{
    init(&y); 
    enqueue(&y, alokasi(3));
    enqueue(&y, alokasi(10));
    enqueue(&y, alokasi(5));
    enqueue(&y, alokasi(7));
    
    cetak(y);


    return 0;
}