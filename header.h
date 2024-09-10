/*Saya Abdurrahman Al Ghifari mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include <stdio.h> // mengambil/menjalankan fungsi dari library input/output
#include <string.h> // mengambil/menjalankan fungsi dari library string

typedef struct{ // mendeklarasikan sebuah bungkusan (struct)
    char namaPosisi[100]; // menampung var nama posisi variabel
    long ratagaji; // menampung var rerata gaji
    int pengalamanKerja; // menampung var pengalaman kerja
}dataSalary; 

int digit1(int n, char posisiDiminta[100], dataSalary inputan[], int cek1digit); // mendeklarasikan fungsi untuk mengecek apakah dia digit 1

int digit2(int n, char posisiDiminta[100], dataSalary inputan[], int cek1digit); // mendeklarasikan fungsi untuk mengecek apakah dia digit 2

int digit3(int n, char posisiDiminta[100], dataSalary inputan[], int cek1digit); // mendeklarasikan fungsi untuk mengecek apakah dia digit 3

void cetakdolar(int ketebalan); // mendeklarasikan prosedur untuk mencetak char dolar 

void cetakblankspace(int ketebalan); // mendeklarasikan prosedur untuk mencetak char blankspace 

void cetakhurufD(int ketebalan); // mendeklarasikan prosedur untuk mencetak char huruf D 

void cetakhurufG(int ketebalan); // mendeklarasikan prosedur untuk mencetak char char huruf G 

void cetakhurufA(int ketebalan); // mendeklarasikan prosedur untuk mencetak char char huruf A 

void cetakhurufB(int ketebalan); // mendeklarasikan prosedur untuk mencetak char char huruf B 

void cetakhurufC(int ketebalan); // mendeklarasikan prosedur untuk mencetak char char huruf C

void cetak1diGc(int ketebalan); // mendeklarasikan prosedur untuk mencetak pola 1 diG c

void cetak2diGb(int ketebalan); // mendeklarasikan prosedur untuk mencetak pola 2 diG b

void cetak3diGa(int ketebalan); // mendeklarasikan prosedur untuk mencetak pola 3 diG a