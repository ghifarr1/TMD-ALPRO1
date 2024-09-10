/*Saya Abdurrahman Al Ghifari mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"

int main(){

    // === MEKANISME INPUT ===  
    int n; // menampung nil untuk berapa banyak data inputan
    scanf("%d", &n); // meminta masukan user
    dataSalary inputan[n]; // membuat array data sebanyak n
    int i, j; // mendeklarasikan variabel indeks counter

    for (i = 0; i < n; i++){ // melakukan perulangan for sebanyak n
        // meminta masukan user terhadap data yg diperlukan
        scanf("%s %ld %d", &inputan[i].namaPosisi, &inputan[i].ratagaji, &inputan[i].pengalamanKerja);
    }
    
    char posisiDiminta[100]; // string untuk menampung posisi yg diminta
    scanf("%s", &posisiDiminta); // meminta masukan user

    int ketebalan; // var untuk menampung ketebalan dari pola
    scanf("%d", &ketebalan); // meminta masukan user

    // === MEKANISME PROSES ===
    int cek1digit = 0, cek2digit = 0, cek3digit = 0; // variabel untuk menampung nilai marking
    cek1digit = digit1(n, posisiDiminta, inputan, cek1digit); // memanggil fungsi cek digit 1
    cek2digit = digit2(n, posisiDiminta, inputan, cek2digit); // memanggil fungsi cek digit 2
    cek3digit = digit3(n, posisiDiminta, inputan, cek3digit); // memanggil fungsi cek digit 3
    
    // === MEKANISME OUTPUT ===
    if (cek1digit == 1){ // mengecek jika nilai marking digit 1 adalah 1 maka print pola
        cetak1diGc(ketebalan); // memanggil prosedur untuk mencetak pola 1 diG c
    }

    if (cek2digit == 1){ // mengecek jika nilai marking digit 2 adalah 1 maka print pola
        cetak2diGb(ketebalan); // memanggil prosedur untuk mencetak pola 2 diG b
    }

    if (cek3digit == 1){ // mengecek jika nilai marking digit 3 adalah 1 maka print pola
        cetak3diGa(ketebalan); // memanggil prosedur untuk mencetak pola 3 diG a
    }
    
    return 0;
}