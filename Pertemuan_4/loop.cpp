#include <iostream>

using namespace std;

int main() {
    // Goto Label
    a:
        cout << "Hello World" << endl;
        goto d;
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;
    d:
        cout << "Ilmu Komputer" << endl;
        goto c;

    // Loop menggunakan goto untuk mencetak bilangan genap
    int i = 1;
    genap:
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    if (i <= 10) {
        goto genap;
    }

    // Loop while untuk mencetak bilangan genap
    int j = 1;
    while(j <= 10) {
        if (j % 2 == 0) {
            cout << j << " ";
        }
        j++;
    }

    // Loop do-while program dijalankan selama kondisi while terpenuhi
    int k = 1;
    do {
        cout << k << endl;
    } while(k <= 0);

    // Loop for untuk mencetak "Hello World" selama l <= 10, dimana setiap loop nilai l ditambah 2 mulai dari 1
    for(int l = 1; l <= 10; l+=2) {
        cout << "Hello World" << endl;
    }

    // Loop for dalam for untuk mencetak bintang dalam bentuk kotak
    for (int m = 1; m <= 5; m++) {
        for (int n = 1; n <= 5; n++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Loop for dalam for untuk mencetak bintang dalam bentuk segitiga
    for (int o = 1; o <= 5; o++) {
        for (int p = 1; p <= o; p++) {
            cout << "* ";
        }
        cout << endl;
    }
}