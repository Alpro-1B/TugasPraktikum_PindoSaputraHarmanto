#include <iostream>
using namespace std;

int main(){
     int n;
     int m = 1;
     int o = 1;
     int p;
     // meminta user memasukan deret finobacci yang ingin dilihat
     cout << "Masukan Jumlah Bilangan Deret Finobacci : ";
     cin >> n;
     cout << endl;

     cout << "Deret Finobacci Hingga Bilanga Ke- " << n << " Adalah : ";

     // membuat dan menampilkan deret finobacci
     for (int i = 1; i <= n; i++){
          // menampilkan angka 
          cout << m << " ";
          // memasukkan jumlah suku ke-n dan suku ke-(n+1) ke dalam suku ke-(n+2)
          p = o+m;
          // menggeser nilai suku ke-(n+1) ke kiri (suku ke-n)
          m=o;
          // menggeser nilai suku ke-(n+2) ke kiri (suku ke-n+1)
          o=p;
     }

     return 0;
}