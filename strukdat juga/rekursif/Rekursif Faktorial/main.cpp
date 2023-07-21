#include <iostream>

using namespace std;
int nilai,hasil;
int factorial(int aNumber){
    if(aNumber < 0){
        return 0;
    } else if (aNumber == 0){
        return 1;
    } else {
        return (aNumber*factorial(aNumber - 1));
    }
}
int main()
{
    printf("Masukkan nilai : \n");
    scanf("%d", &nilai);
    hasil = factorial(nilai);
    printf("hasilnya adalah %d", hasil);
    return 0;
}
