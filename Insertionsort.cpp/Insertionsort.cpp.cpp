#include <iostream>
using namespace std;

int arr[20];            //Membuat array dengan panjang data 20
int n;                 //Membuat Variable inputan n

void input() {          //Procedure Input
    while (true) {
        cout << "Masukkan Jumlah Data pada Array : ";     //Membuat Inputan jumlah element array
        cin >> n;                                    //Memanggil variable inputan n

        if (n <= 20) {                               //Membuat kondisi n tidak lebih dari sama den 20
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen. \n";   //Menampilkan Pesan jika data lebih dari 20
        }
    }
