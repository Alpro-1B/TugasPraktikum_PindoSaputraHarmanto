#include <iostream>
using namespace std;

int main() {

     // penamaan variabel
     int angka1, angka2, angka3;

     // meminta user memasukan angka pertama
     cout << "Angka pertama : ";
     cin >> angka1;
     // meminta user memasukan angka kedua
     cout << "Angka kedua : ";
     cin >> angka2;
     // meminta user memasukan angka ketiga
     cout << "Angka ketiga : ";
     cin >> angka3;

     // jika angka pertama lebih besar maka yang keluar maka output ini yang keluar
     if ( angka1 > angka2 && angka1 > angka3 )
          cout << "Angka yang terbesar adalah : " << angka1 << endl;
     // jika angka kedua lebih besar maka yang keluar maka output ini yang keluar
     else if ( angka2 > angka1 && angka2 > angka3 )
          cout << "Angka yang terbesar adalah : " << angka2 << endl;
     // jika angka ketiga lebih besar maka yang keluar maka output ini yang keluar
     else
          cout << "Angka yang terbesar adalah : " << angka3 << endl;
     return 0;
}