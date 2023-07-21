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
using namespace std;

/*
 * TODO 1
 * Buatlah sebuah fungsi rekursif yang menerima sebuah bilangan bulat n
 * dan mengembalikan bilangan fibonacci ke-n (urutan fibonacci dimulai dari 0).
 */
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
}