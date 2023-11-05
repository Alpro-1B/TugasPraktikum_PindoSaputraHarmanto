#include <iostream>

using namespace std;

int main(){
     // penamaan variabel
     int t;

     cout << "Silahkan Masukan Tinggi Segitiga Yang Akan Anda Buat : ";
     // meminta user memasukan tinggi segitiga
     cin >> t;
     cout << "Segitiga Dengan Tinggi " << t << " Akan Menjadi Seperti Ini : ";
     cout << endl << endl;

     // proses pembuatan segitiga
     for (int i = 1; i <= t; i++){
          // pemberian jarak agar segitiga berada pada posisi tengah
          for (int j = t; j > i; j--){
               cout << " "; 
          }
          // menampilkan bentuk segitiga dengan tanda *
          for (int k = 1; k <= i; k++){
               cout << " *"; 
          }
     cout << endl;
     }
     
     return 0;
}