#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
    system("cls");

    //? Array Declaration and Initialization
    string nama[5] = {"Andi", "Budi", "Santi", "Wanto", "Denis"};// array dengan tipe data string sebanyak 5 data
    // mengisi array nama secara manual
    nama[0] = "Andi";
    nama[1] = "Budi";
    nama[2] = "Santi";
    nama[3] = "Wanto";
    nama[4] = "Denis";

    //? Accessing Elements in Array
    // menampilkan elemen array nama
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }

    //? Multidimensional Array
    int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}}; // array matriks dengan tipe data integer sebanyak 2 baris dan 3 kolom
    for (int i = 0; i < 2; i++) { // looping untuk menampilkan elemen array matriks
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //? String (Array of Characters)
    string nama = "zustine";

    cout << nama[0] << endl;
    cout << nama[2] << endl;

    for (int i = 0; i < nama.length(); i++) {
        cout << nama[i] << endl;
    }


    //? Contoh 1
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    float nilai[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke " << i + 1 << " : " <<  nilai[i] << endl;
    }

    //? Contoh 2
    string nama_karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santika", "Dodi"};

    //! sizeof() -> fungsi untuk mengecek ukuran suatu objek
    //! n * sizeof(string) = sizeof(nama_karyawan)
    //! n = sizeof(nama_karyawan) / sizeof(string)

    for (int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++)// looping untuk menampilkan elemen array nama_karyawan
    {
        cout << nama_karyawan[i] << endl;
    }

    //? Contoh 3
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Matriks 2" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil Penjumlahan" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];// menjumlahkan elemen-elemen array matriks1 dan matriks2
            cout << hasil[i][j] << " ";// menampilkan elemen array hasil
        }
        cout << endl;
    }

    //? Array Library
    array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};

    cout << "Nilai : ";

    for (float n : nilai) {         //* For Each Loop
        cout << n << " ";
    }
}