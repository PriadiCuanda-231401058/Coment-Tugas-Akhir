#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b) {
    *a += *b;// menjumlahkan isi pointer b ke dalam pointer a
    cout << *a << endl;// menampilkan isi pointer a
}

void doubleValue(int* a) {
    *a *= 2;
}

int main() {
    system("cls");

    //? Pointer Declaration
    //* Normal Variable --> variable(data), &variable(alamat memori)
    int number = 35;
    //* Pointer Variable --> variable(alamat memori variabel yang ditunjuk), &variable(alamat memori), *variable(data variabel yang ditunjuk)
    int* pointer_number = &number;

    // & untuk alamat memori dan * untuk isi alamat yang ditunjuk
    cout << "Isi variabel number = " << number << endl; // isi variabel number
    cout << "Alamat memori variabel number = " << &number << endl; // alamat memori variabel number
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    //? Pointer Operation
    *pointer_number = 25; // mengubah isi pointer_number menjadi 25
    cout << "Isi variabel number = " << number << endl; // menampilkan isi variabel number
    cout << "Alamat memori variabel number = " << &number << endl; // menampilkan alamat memori variabel number
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    //? Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // array dengan tipe data integer sebanyak 5 data
    int* pointer_num = num; // pointer_num menunjuk ke alamat memori array num

    cout << "Isi variabel num = " << num[0] << endl; // menampilkan isi variabel num
    cout << "Alamat memori variabel num = " << &num[0] << endl; // menampilkan alamat memori variabel num
    // cout << "Alamat memori variabel num = " << num << endl;      //* Same with above
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    *pointer_num += 5; // mengubah isi pointer_num menjadi 5
    cout << "Isi variabel num = " << num[0] << endl; // menampilkan isi variabel num
    cout << "Alamat memori variabel num = " << &num[0] << endl; // menampilkan alamat memori variabel num
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    //? Pointer in Parameter
    int num1 = 5;
    int num2 = 7;

    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    penjumlahanPointer(&num1, &num2);// menjumlahkan isi pointer num1 dan num2
    cout << num1 << endl;// menampilkan isi variabel num1
    cout << num2 << endl;// menampilkan isi variabel num2

    //? Pointer in Pointer
    int score = 4;
    int* pointer_score = &score;// pointer_score menunjuk ke alamat memori variabel score
    int** ptr_pointer_score = &pointer_score;// ptr_pointer_score menunjuk ke alamat memori pointer_score
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    //? Dynamic Pointer
    int* ptr = new int; //nilai belum diketahui, alamat memori belum diketahui    //* Memory allocation
    *ptr = 30;
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr;     //* Memory deallocation
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;

    //* Example Code
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);// mengubah nilai pointer n menjadi 2x
    cout << "Nilai angka setelah dikali 2 = " << n << endl;// menampilkan nilai angka setelah dikali 2

    return 0;
}