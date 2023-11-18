#include <iostream>

using namespace std;

// deklarasi fungsi-fungsi
void hitungBilanganGanjil(int batas, int &jumlahGanjil);
void hitungBilanganGenap(int batas, int &jumlahGenap);
void hitungBilanganPrima(int batas, int &jumlahPrima);
void faktorBilangan(int jumlah, string namaBilangan);

int main() {
     // deklarasi variabel utama
     int batas;
     int jumlahGanjil = 0;
     int jumlahGenap = 0;
     int jumlahPrima = 0;

     // input batas bilangan dari user
     cout << "Masukkan Batas Bilangan: ";
     cin >> batas;
     cout << endl;

     // menghitung bilangan ganjil
     hitungBilanganGanjil(batas, jumlahGanjil);

     // menghitung bilangan genap
     hitungBilanganGenap(batas, jumlahGenap);

     // menghitung bilangan prima
     hitungBilanganPrima(batas, jumlahPrima);

     // output jumlah masing-masing bilangan
     cout << "Jumlah Bilangan Ganjil Antara 1 Hingga " << batas << " Adalah : " << jumlahGanjil << endl;
     cout << "Jumlah Bilangan Genap Antara 1 Hingga " << batas << " Adalah : " << jumlahGenap << endl;
     cout << "Jumlah Bilangan Prima Antara 1 Hingga " << batas << " Adalah : " << jumlahPrima << endl;
     cout << endl;

     faktorBilangan(jumlahGanjil, "Ganjil");
     faktorBilangan(jumlahGenap, "Genap");
     faktorBilangan(jumlahPrima, "Prima");

     return 0;
}

// implementasi fungsi hitung bilangan ganjil
void hitungBilanganGanjil(int batas, int &jumlahGanjil) {
     // output bilangan ganjil
     cout << "Bilangan Ganjil Antara 1 Hingga " << batas << " adalah : ";
     // loop untuk menampilkan dan menghitung bilangan ganjil
     for (int i = 0; i <= batas; i++) {
          if (i % 2 != 0) {
               cout << i << " ";
               jumlahGanjil += i;
          }
     }
     cout << endl; // memberi jarak antara bilangan hasil bilangan ganjil dan genap
}

// implementasi fungsi hitung bilangan genap
void hitungBilanganGenap(int batas, int &jumlahGenap) {
     // output bilangan genap
     cout << "Bilangan Genap Antara 1 Hingga " << batas << " adalah : ";
     // loop untuk menampilkan dan menghitung bilangan genap
     for (int i = 2; i <= batas; i += 2) {
          cout << i << " ";
          jumlahGenap += i;
     }
     cout << endl; // memberi jarak antara bilangan genap dan bilangan prima
}

// implementasi fungsi hitung bilangan prima
void hitungBilanganPrima(int batas, int &jumlahPrima) {
     // output bilangan prima
     cout << "Bilangan Prima Antara 1 Hingga " << batas << " adalah : ";
     // loop untuk menampilkan dan menghitung bilangan prima
     for (int i = 2; i <= batas; i++) {
          int j;
          // inner loop untuk menentukan bilangan prima
          for (j = 2; j * j <= i && i % j != 0; j++) {}
          // jika j * j > i, maka i adalah bilangan prima
          if (j * j > i) {
               cout << i << " ";
               jumlahPrima += i;
          }
     }
     cout << endl << endl;
}

// implementasi fungsi faktor bilangan
void faktorBilangan(int jumlah, string namaBilangan) {
     // output faktor bilangan
     cout << "Faktor-Faktor Dari Jumlah " << namaBilangan << " Tersebut Adalah : ";
     // loop untuk menampilkan faktor bilangan
     for (int k = 1; k <= jumlah; k++) {
          if (jumlah % k == 0) {
               cout << k << " ";
          }
     }
     cout << endl;
}
