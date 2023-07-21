/****************************************************************************************************
 *      Perhatian !!!
 *
 *      Agar dapat diperiksa dengan baik, hindari beberapa hal berikut:
 *
 *      1. Mengubah kode yang berada di dalam fungsi main()
 *      2. Mengubah atau menghapus kode yang sudah ada secara default
 *      3. Membuat fungsi baru
 *
 ***************************************************************************************************/

#include <iostream>
#define MAXQUEUE 5
using namespace std;


/*
 * TODO 1
 * Buatlah struct Person dengan atribut:
 * - nama (string)
 * - berat (int)
 */
typedef struct {
    string nama;
    int berat;
} Person;

/*
 * TODO 2
 * Buatlah struct Queue dengan atribut:
 * - count (int)
 * - front (int)
 * - rear (int)
 * - listPerson (array dari Person)
 */
typedef struct {
    int count;
    int front;
    int rear;
    Person listPerson[MAXQUEUE];
} Queue;

Queue antrian;

/*
 * TODO 3
 * Buatlah fungsi init() untuk menginisialisasi atribut dari Queue
 */
void init(Queue *Q) {
    Q -> count = 0;
    Q -> front = 0;
    Q -> rear = 0;
}

/*
 * TODO 4
 * Buatlah fungsi isFull() untuk mengecek apakah Queue sudah penuh atau
 * belum Jika sudah penuh, kembalikan nilai true Jika belum penuh,
 * kembalikan nilai false
 */
bool isFull(Queue *Q) {
    if(Q->count== MAXQUEUE){
        return true;
    }else{
        return false;
    }
}

/*
 * TODO 5
 * Buatlah fungsi insert() untuk memasukkan data ke dalam Queue, dengan
 * ketentuan:
 * 1. Jika Queue sudah penuh, tampilkan pesan "{nama} tidak mendapatkan
 * antrian"
 * 2. Jika Queue belum penuh, masukkan data ke dalam Queue
 * 3. Jika berat badan orang tersebut lebih dari 55, tampilkan pesan "Berat
 * badan {nama} tidak memenuhi syarat"
 */
void insert(Queue *Q, Person data) {
if (isFull(Q)) {
        cout << data.nama << " tidak mendapatkan antrian" << endl;
    } else {
        if (data.berat > 55) {
            cout << "Berat badan " << data.nama << " tidak memenuhi syarat" << endl;
        } else {
            Q->listPerson[Q->rear] = data;
            Q->rear = (Q->rear + 1) % MAXQUEUE;
            Q->count++;
        }
    }
    
}

main() {
    Person orang;
    init(&antrian);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> orang.nama;
        cin >> orang.berat;
        insert(&antrian, orang);
    }

    for (int i = 0; i < 5; i++) {
        cout << antrian.listPerson[i].nama << " " << antrian.listPerson[i].berat
             << endl;
    }
}