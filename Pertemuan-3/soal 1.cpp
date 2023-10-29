#include <iostream>
using namespace std;

int main() {

     // penamaan variabel
     int score;

     // meminta user untuk memasukan score
     cout << "Masukkan nilai score: ";
     cin >> score;

     // jika score bernilai lebih dari 100
     if (score > 100) {
          // tampilan jika nilai lebih dari 100
          cout << "Masukan nilai yang realistis!!" << endl;
     // jika score bernilai 90 sampai 100
     } else if (score >= 90) {
          // menampilkan nilai A
          cout << "Selamat! Anda mendapatkan nilai A." << endl;
     // jika score bernilai 80 sampai 89
     } else if (score >= 80 && score <= 89) {
          // menampilkan nilai B
          cout << "Anda mendapatkan nilai B." << endl;
     // jika score bernilai 70 sampai 79
     } else if (score >= 70 && score <= 79) {
          // menampilkan nilai C
          cout << "Anda mendapatkan nilai C." << endl;
     // jika score bernilai 60 sampai 69
     } else if (score >= 60 && score <= 69) {
          // menampilkan nilai D
          cout << "Anda mendapatkan nilai D." << endl;
     // jika score kurang dari 60 atau bilangan lainnya yang tidak masuk dalam else if
     } else {
          // menampilkan nilai E
          cout << "Anda mendapatkan nilai E." << endl;
     }

     return 0;
}
