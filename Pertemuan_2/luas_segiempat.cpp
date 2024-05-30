#include <iostream>

using namespace std;

int main() {
    float luas, p, l;

    // const untuk membuat variabel konstanta yang berisi daya yang tidak dapat diubah dalam program
    const float PHI = 3.14;
    
    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l;

    cout << "Luas = " << luas << endl;

    return 0;
}