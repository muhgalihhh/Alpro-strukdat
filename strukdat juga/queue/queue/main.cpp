#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXQUEUE 2
typedef struct{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];
}QUEUE;
QUEUE antrian;
void inisialisasi(QUEUE *Q){
    Q->count=0;
    Q->front=0;
    Q->rear=0;
}
bool isEmpty(QUEUE *Q){
    if(Q->count==0){
        return true;
    }else{
        return false;
    }
}

bool isFull(QUEUE *Q){
    if(Q->count==MAXQUEUE){
        return true;
    } else{
        return false;
    }
}
void insert(QUEUE *Q, int data){
    if(isFull(Q)){
        printf("maaf sudah full");
    }else{
        Q->item[Q->rear]=data;
        Q->rear=(Q->rear+1)%MAXQUEUE;
        ++(Q->count);
    }
}
void dequeue(QUEUE *Q) {
    if (isEmpty(Q)) {
        printf("Antrian kosong.\n");
    } else {
        Q->front = (Q->front + 1) % MAXQUEUE;
        --(Q->count);
    }
}
void cetak(QUEUE *Q) {
    if (isEmpty(Q)) {
        printf("Antrian kosong.\n");
    } else {
        int i, j;
        printf("Isi antrian: ");
        j = Q->front;
        for (i = 0; i < Q->count; i++) {
            printf("%d ", Q->item[j]);
            j = (j + 1) % MAXQUEUE;
        }
        printf("\n");
    }
}


main(){
    inisialisasi(&antrian);
    printf("masukan 3\n");
    insert(&antrian, 3);
    printf("masukan 6\n");
    insert(&antrian, 6);
    dequeue(&antrian);
    cetak(&antrian);
}
