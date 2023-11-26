#include <iostream>

using namespace std;

int main() {
    const int arraySize = 5;  // mendefinisikan ukuran array
    int numbers[arraySize];  // hdeklarasi array untuk menyimpan bilangan bulat

     // meminta user untuk menginput nilai
    cout << "Masukkan " << arraySize << " bilangan bulat:\n";
    for (int i = 0; i < arraySize; ++i) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> numbers[i];
    }

    // mencari nilai tertinggi dalam array
    int max = numbers[0];  // menginisialisasi variabel max dengan elemen pertama array
    int maxIndex = 0;  // Menginisialisasi variabel max index dengan indeks elemen pertama

    // iterasi melalui array untuk mencari nilai tertinggi dan indeksnya
    for (int i = 1; i < arraySize; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
            maxIndex = i;
        }
    }

    // menampilkan hasil nilai tertinggi
    cout << "Nilai tertinggi adalah: " << max << endl;

    // menampilkan indeks nilai tertinggi
    if (maxIndex != -1) {
        cout << "Nilai tersebut ditemukan pada indeks: " << maxIndex << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array.\n";
    }

    return 0;
}
