/* RESPONSI 1 STRUKTUR DATA
 * PAKET 4 STACK
 */

#include <iostream>
#include <string>

using namespace std;

#define MAX 50

//Struktur data stack
typedef struct stack {
    char item[MAX];
    int count;
} Stack;
Stack tumpukan;

//  Method inisialisasi stack
void inisialisasi(Stack * x) {
    x->count = 0;
}

// Method pengecekan apakah stack kosong
int isEmpty(Stack * x) {
    if (x->count == 0) {
        return 1;
    }
    return 0;
}
//
// Method pengecekan apakah stack penuh
int isFull(Stack * x) {
    if (x->count == MAX) {
        return 1;
    }
    return 0;
}

// Method push data ke stack
void push(Stack * x, char data) {
    if (!isFull(x)) {
        x->item[(x->count)++] = data;
    }
}

// Fungsi pop dari stack
// Fungsi ini akan mengembalikan data paling atas/akhir stack
char pop(Stack * x) {
    char y = 0;
    if (!isEmpty(x)) {
        y = x->item[--(x->count)];
        x->item[x->count] = 0;
    }
    return y;
}

// Method pengecekan
int cek(string deret_kurung) {
  int seimbang = 1;
  for (char x : deret_kurung) {
    /* == TODO ==
    * Lengkapi for loop dari fungsi cek ini!
    * - Fungsi ini menerima sebuah argumen string berupa deret tanda kurung
    * - Fungsi ini akan mengembalikan 0 (apabila deret kurung tidak seimbang) dan 1 (apabila deret kurung seimbang)
    * - For loop ini akan mengakses satu per satu karakter pada string deret kurung dan menyimpannya di variabel x
    */



  }

  if (!isEmpty(&tumpukan)) seimbang = 0; // Apabila pada akhirnya stack tidak kosong, maka deret kurung tidak seimbang

  return seimbang;
}

int main() {
  /* == PERINGATAN ==
   * Kamu tidak perlu mengubah isi method main ini.
   * Kamu hanya perlu mengisi blok kode yang bertuliskan TODO saja.
   */


  inisialisasi(&tumpukan);

  string x;
  cin >> x;

  if (cek(x)) {
    cout << "SUDAH SEIMBANG" << endl;
  } else {
    cout << "BELUM SEIMBANG" << endl;
  }

  return 0;
}
