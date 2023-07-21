#include <iostream>
using namespace std;
 
typedef struct node *address;
struct node
{  address left;
  int info;
  address right;};
int i, j;
address P, first, last, q, r, s;
address Points[5];
 
int main () {
int A[5][5] =
    { 0, 5, 0, 2, 0, 6, 0, 3, 0, 0, 0, 0, 0, 0, 9, 0, 0, 12, 0, 7, 0, 14, 0, 0, 0 }; 
char huruf[6] ="ABCDE";
i = 0; j = 0; 
P = new node;
P->info = huruf[0]; 
first = P;
last = P;
P->left = NULL;
P->right = NULL;
Points[0] = P;
  
 
// inisiasi semua vertex yang ada
    for (i = 1; i <= 4; i++){
        P = new node;
        P->left = NULL; P->right = NULL;
        P->info = huruf[i];
        last->left = P;
        last = P;
        Points[i] = P;
    }
  
 
q = first;  
for (i = 0; i <= 4; i++){
    r = q;
    printf ("vertex %c ....", q->info);  
    for (j = 0; j <= 4; j++){
        if (A[i][j] != 0){
            P = new node;
	        P->info = A[i][j];
            r->right = P; 
            P->left = Points[j];
            printf (" berhubungan dengan %c", P->left->info);
            printf (" bobot %d", P->info);
            P->right = NULL;
            r = P; }
	}
    printf ("\n");  
    q = q->left;
}
}


 