#include <iostream>

using namespace std;

int dataku[15] = {78, 79, 7, 8, 32, 1, 2, 34, 5, 6, 7, 89, 32, 90, 100};
int indketemu, nilai;

int search(int dicari, int jmlIndex) {
    if (jmlIndex == 0) {
        return -1;
    }
    if (dataku[jmlIndex - 1] == dicari) {
        return jmlIndex;
    }
    return search(dicari, jmlIndex - 1);
}

int main() {
    printf("Masukkan nilai yang akan dicari: \n");
    scanf("%d", &nilai);
    indketemu = search(nilai, 14);
    if (indketemu == -1) {
        printf("Data tidak ditemukan");
    } else {
        printf("Data ditemukan pada elemen ke %d", indketemu);
    }
    return 0;
}
