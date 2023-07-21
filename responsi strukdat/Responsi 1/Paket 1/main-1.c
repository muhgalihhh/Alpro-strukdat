#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node *address;

// Struktur node untuk linked list
struct Node {
    char name[50];
    int age;
    address next;
};

// Fungsi untuk membuat node baru
address createNode(char name[], int age) {
    address newNode = (address)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan node ke linked list, dengan urutan dari umur yang terbesar ke terkecil
void addNode(address* head, char name[], int age) {
    // TODO(1): Implementasikan fungsi addNode
    address nodeBaru = createNode(name, age);
    address sekarang = *head;
    address Sebelum = NULL;
    while (sekarang != NULL && sekarang->age > age) {
        Sebelum = sekarang;
        sekarang = sekarang->next;
    }
    if (
        Sebelum == NULL) {
        nodeBaru->next = *head;
        *head = nodeBaru;
    } else {
        nodeBaru->next =  Sebelum->next;
        Sebelum->next = nodeBaru;
    }
}

// Fungsi untuk mencetak linked list dalam format (nama, umur)(nama, umur)...
void printList(address head) {
    // TODO(2): Implementasikan fungsi printList
    address p=head;
    while (p != NULL) {
        for(int i = 0; i < 50; i++){
            printf("(%s,%d)", p->name[i], p->age);
        }
    }
}

int main() {
    int n;
    char name[50];
    int age;
    address head = NULL;

    // Input jumlah data yang akan dimasukkan ke linked list
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Input nama dan umur
        scanf("%s", name);
        scanf("%d", &age);
        
        // Menambahkan inputan ke linked list
        addNode(&head, name, age);
    }

    // Mencetak linked list dalam bentuk tabel
    printList(head);

    return 0;
}
