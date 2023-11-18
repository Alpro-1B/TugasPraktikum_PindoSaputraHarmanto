#include <iostream>
using namespace std;

// deklarasi fungsi
void inputJumlahDeret(int &jumlah);
void tampilkanDeretFibonacci(int jumlah);

int main() {
     // deklarasi variabel
     int n;

     // meminta input jumlah bilangan deret Fibonacci dari pengguna
     inputJumlahDeret(n);

     // menampilkan deret Fibonacci
     tampilkanDeretFibonacci(n);

     return 0;
}

// implementasi fungsi input jumlah deret
void inputJumlahDeret(int &jumlah) {
     // meminta input jumlah bilangan deret fibonacci dari pengguna
     cout << "Masukkan Jumlah Bilangan Deret Fibonacci: ";
     cin >> jumlah;
     cout << endl;

     cout << "Deret Fibonacci Hingga Bilangan Ke-" << jumlah << " Adalah : ";
}

// implementasi fungsi tampilkan deret fibonacci
void tampilkanDeretFibonacci(int jumlah) {
     int m = 1;
     int o = 1;
     int p;

     // membuat dan menampilkan deret fibonacci
     for (int i = 1; i <= jumlah; i++) {
          // menampilkan angka
          cout << m << " ";

          // memasukkan jumlah suku ke-n dan suku ke-(n+1) ke dalam suku ke-(n+2)
          p = o + m;

          // menggeser nilai suku ke-(n+1) ke kiri (suku ke-n)
          m = o;

          // menggeser nilai suku ke-(n+2) ke kiri (suku ke-(n+1))
          o = p;
     }
}
