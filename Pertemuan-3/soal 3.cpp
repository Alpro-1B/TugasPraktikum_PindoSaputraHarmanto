#include <iostream>
using namespace std;

int main() {

     // penamaan variabel
     int pilihan;
     // untuk memunculkan hasil bila hasilnya desimal
     float alas, sisi, tinggi, panjang, lebar, luas;

     // meminta user memilih bangun datar
     cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
     cout << "1. Persegi" << endl;
     cout << "2. Persegi Panjang" << endl;
     cout << "3. Segitiga" << endl;
     cout << "Masukkan pilihan (1/2/3): ";
     cin >> pilihan;

     // proses pengkondisian berdasarkan apa yang user telah pilih
     switch (pilihan) {
          // jika user memilih 1 maka bangun datarnya persegi
          case 1:
               // meminta user memasukan sisi persegi yang akan dihitung
               cout << "Masukkan panjang sisi persegi: ";
               cin >> sisi;
               // menghitung rumus luas persegi
               luas = sisi * sisi;
               // menampilkan hasil perhitungan luas
               cout << "Luas persegi: " << luas << endl;
               break;

          // jika user memilih 2 maka bangun datarnya persegi panjang
          case 2:
               // meminta user masukan panjang persegi panjang
               cout << "Masukkan panjang persegi panjang: ";
               cin >> panjang;
               // meminta user masukan lebar persegi panjang
               cout << "Masukkan lebar persegi panjang: ";
               cin >> lebar;
               // menghitung rumus luas persegi panjang
               luas = panjang * lebar;
               // menampilkan hasil perhitungan luas
               cout << "Luas persegi panjang: " << luas << endl;
               break;

          // jika user memilih 3 maka bangun datarnya segitiga
          case 3:
               // meminta user masukan alas segitiga
               cout << "Masukkan alas segitiga: ";
               cin >> alas;
               // meminta user masukan tinggi segitiga
               cout << "Masukkan tinggi segitiga: ";
               cin >> tinggi;
               // menghitung rumus luas segitiga
               luas = 0.5 * alas * tinggi;
               // menampilkan hasil perhitungan luas
               cout << "Luas segitiga: " << luas << endl;
               break;
          default:

               // menampilan jika user tidak memilih 1, 2, dan 3
               cout << "Pilihan tidak ada dalam data" << endl;
     }

     return 0;
}
