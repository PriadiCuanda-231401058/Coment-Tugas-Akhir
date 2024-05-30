#include <iostream>
#include <math.h>
#include <cctype>

using namespace std;
// membuat semacam deklarasi untuk fungsi agar program utama dapat berjalan
void garis(); // void tanpa return
void bintang(); // void tanpa return
void menu(); // void tanpa return
int tambah(int a, int b); // int dengan return berupa integer
int kurang(int a, int b); // int dengan return berupa integer
int kali(int a, int b); // int dengan return berupa integer
float bagi(int a, int b); // float dengan return berupa float / desimal
int modulo(int a, int b); // int dengan return berupa integer
int pangkat(int a, int b); // int dengan return berupa integer

int main() {
    char cont;

    do {
        system("cls");

        menu();

        int operation, a, b, hasil;
        cout << "Masukkan operasi : ";
        cin >> operation;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        switch(operation) {
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        cout << "Hasil = " << hasil << endl;

        bintang();

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y');

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;
    return 0;
}
// fungsi garis untuk membuat garis
void garis() {
    cout << "====================================" << endl;
}
// fungsi bintang untuk membuat bintang
void bintang() {
    cout << "************************************" << endl;
}
// fungsi menu untuk membuat menu
void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;
    garis();
}
// fungsi tambah untuk menjumlahkan dua angka
int tambah(int a, int b) {
    return a + b;
}
// fungsi kurang untuk mengurangi dua angka
int kurang(int a, int b) {
    return a - b;
}
// fungsi kali untuk mengalikan dua angka
int kali(int a, int b) {
    return a * b;
}
// fungsi bagi untuk mengubah tipe data dari int menjadi float dan mengembalikan hasil bagi dari dua angka
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}
// fungsi modulo untuk mengembalikan sisa hasil bagi dari dua angka
int modulo(int a, int b) {
    return a % b;
}
// fungsi pangkat untuk mengembalikan hasil pangkat dari dua angka
int pangkat(int a, int b) {
    return pow(a, b);
}