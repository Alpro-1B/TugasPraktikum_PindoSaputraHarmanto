#include <iostream>

using namespace std;

int main()
{
     // penamaan variabel
     int batas;
     int jumlahGanjil = 0;
     int jumlahGenap = 0;
     int jumlahPrima = 0;
     cout << "Masukkan Batas Bilangan: ";
     // meminta input batas angka
     cin >> batas;
     cout << endl;

// bagian bilangan ganjil
     // output bilangan ganjil
     cout << "Bilangan Ganjil Antara 1 Hingga " << batas << " adalah : ";
     for (int i = 0; i <= batas; i++){
          //jika modulus i tidak sama dengan 0 maka keluar output ini
          if (i % 2 != 0){
               cout << i << " ";
               // menghitung bilangan ganjil
               jumlahGanjil += i;
          }
     }
     cout << endl;

// bagian bilangan genap
     // output bilangan ganjil
     cout << "Bilangan Genap Antara 1 Hingga " << batas << " adalah : ";
     // menghitung bilangan genap
     for (int i = 2; i <= batas; i += 2){
          cout << i << " ";
          jumlahGenap += i;
     }
     cout << endl;

// bagian bilangan prima
     // output bilangan prima
     cout << "Bilangan Prima Antara 1 Hingga " << batas << " adalah : ";
     for (int i = 2; i <= batas; i++){
          // penamaan variabel
          int j;
          // innerloop untuk menentukan bilangan yang difaktor oleh dirinya
          for (j = 2; j * j <= i && i % j != 0; j++){
          }
          // jika variabel j dikali variabel j lebih besar dari variabel i maka menghasilkan output tersebut
          if (j * j > i){
               cout << i << " ";
               jumlahPrima += i;
          }
     }
     cout << endl << endl;

// output untuk masing masing bilangan
     cout << "Jumlah Bilangan Ganjil Antara 1 Hingga " << batas << " Adalah : " << jumlahGanjil << endl;
     cout << "Jumlah Bilangan Genap Antara 1 Hingga " << batas << " Adalah : " << jumlahGenap << endl;
     cout << "Jumlah Bilangan Prima Antara 1 Hingga " << batas << " Adalah : " << jumlahPrima << endl;
     cout << endl;

// bagian faktor
     // output untuk faktor jumlah bilangan ganjil
	cout << "Faktor-Faktor Dari Jumlah Ganjil Tersebut Adalah : ";
	for (int k = 1; k <= jumlahGanjil; k++){
		if (jumlahGanjil % k == 0){
			cout << k << " ";
			}
		}
	cout<< endl;

     // output untuk faktor jumlah bilangan genap
	cout << "Faktor-Faktor Dari Jumlah Genap Tersebut Adalah : ";
	for (int l = 1; l <= jumlahGenap; l++){
		if (jumlahGenap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;

     // output untuk faktor jumlah bilangan prima
     cout << "Faktor-Faktor Dari Jumlah Prima Tersebut Adalah : ";
	for (int m = 1; m <= jumlahPrima; m++){
          if (jumlahPrima % m == 0){
			cout << m << " ";
		}
	}
}