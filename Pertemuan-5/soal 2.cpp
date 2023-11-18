#include <iostream>

using namespace std;

// deklarasi fungsi
void inputTinggi(int &tinggi);
void tampilkanSegitiga(int tinggi);

int main() {
     // deklarasi variabel
     int tinggi;

     // meminta input tinggi segitiga dari pengguna
     inputTinggi(tinggi);

     // menampilkan segitiga
     tampilkanSegitiga(tinggi);

     return 0;
}

// implementasi fungsi inputTinggi
void inputTinggi(int &tinggi) {
     // meminta input tinggi segitiga dari pengguna
     cout << "Silahkan Masukkan Tinggi Segitiga Yang Akan Anda Buat : ";
     cin >> tinggi;
     cout << "Segitiga Dengan Tinggi " << tinggi << " Akan Menjadi Seperti Ini : ";
     cout << endl << endl;
}

// implementasi fungsi tampilkanSegitiga
void tampilkanSegitiga(int tinggi) {
    // proses pembuatan segitiga
     for (int i = 1; i <= tinggi; i++) {
          // pemberian jarak agar segitiga berada pada posisi tengah
          for (int j = tinggi; j > i; j--) {
               cout << " "; 
          }
          // menampilkan bentuk segitiga dengan tanda *
          for (int k = 1; k <= i; k++) {
               cout << " *"; 
          }
          cout << endl;
     }
}
