#include <iostream>

using namespace std;

int main() {
    int a, b;

    system("CLS");

    // Assignment Operator (=)
    a = 3;
    b = 5;



    // Arithmetical Operator (+, -, *, /, %)
    //untuk melakukan operasi aritmatika biasa pada bilangan 
    int tambah = a + b;//penjumlahan
    int kurang = a - b;//pengurangan
    int kali = a * b;//perkalian
    float bagi = (float) a / (float) b; //pembagian    // Type casting = mengubah tipe data dari sebuah variabel
    int modulo = a % b;//sisa bagi

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;



    // Relational Operator
    // untuk melakukan operasi perbandingan pada bilangan
    cout << (a == b) << endl;//sama dengan
    cout << (a > b) << endl;//lebih dari
    cout << (a >= b) << endl;//lebih dari sama dengan
    cout << (a < b) << endl;//kurang dari
    cout << (a <= b) << endl;//kurang dari sama dengan
    cout << (a != b) << endl;//tidak sama dengan



    // Logical Operator (&&, ||, !)
    // untuk melakukan operasi boolean

    // dan
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    // atau
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    // not
    cout << !true << endl;
    cout << !false << endl;



    // Bitwise Operator (&, |, ^, ~, <<, >>) --> Biner
    // untuk melakukan operasi yang mana bilangan diubah dulu kebentuk biner sebelum di lakukan operasi bitwise
    cout << (5 & 7) << endl;//AND
    cout << (5 | 7) << endl;//OR
    cout << (5 ^ 7) << endl;//XOR
    cout << (~7) << endl;//NOT
    cout << (7 << 2) << endl;//left shift
    cout << (7 >> 2) << endl;//right shift



    // Shorthand
    // jalan singkat untuk melakukan operasi aritmatika
    a += 7;     // a = a + 7;
    cout << a << endl;

    a -= 7;     // a = a - 7;
    cout << a << endl;

    a *= 7;     // a = a * 7;
    cout << a << endl;

    a /= 7;     // a = a / 7;
    cout << a << endl;



    // Increment & Decrement
    // Pre Increment
    // untuk melakukan operasi increment sebelum di tampilkan
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;


    // Post Increment
    // untuk melakukan operasi increment setelah di tampilkan
    cout << a++ << endl;
    cout << a << endl;

    cout << b++ << endl;
    cout << b << endl;


    // Pre Decrement
    // untuk melakukan operasi decrement sebelum di tampilkan
    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << -b << endl;

    
    // Post Decrement
    // untuk melakukan operasi decrement setelah di tampilkan
    cout << a-- << endl;
    cout << a << endl;

    cout << b-- << endl;
    cout << b << endl;

}  