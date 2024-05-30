#include <iostream>

using namespace std;

int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    cout << "Hello World" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama);//untuk mengambil input dari user dengan spasi

    cout << "Masukkan NIM : ";//untuk menampilkan
    cin >> nim;//untuk mengambil input dari user

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    // untuk menampilkan hasil inputan
    cout << "NAMA : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP : " << ip << endl;


}