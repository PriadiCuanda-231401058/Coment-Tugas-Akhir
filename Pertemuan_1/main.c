#include <stdio.h>
#include <conio.h>

int main() {
    // Deklarasi variabel
    char nama[50];
    int nim;
    char kom;
    float ip;

    // Output dan input data
    printf("Hello World\n");
    printf("Masukkan nama : ");
    gets(nama);     // Membaca string lengkap dengan spasi

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // Menampilkan data
    printf("Nama : ");
    puts(nama);     // Menampilkan string dari gets
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.3f\n", ip);

    printf("Press any button to continue...");
    getch();        // Menangkap satu karakter
}