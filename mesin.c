/*Saya Abdurrahman Al Ghifari mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"

int digit1(int n, char posisiDiminta[100], dataSalary inputan[], int cek1digit){ // mendefinisikan fungsi untuk mengecek apakah dia digit 1
    int i; // var untuk indeks counter
    for (i = 0; i < n; i++){ // melakukan perulangan for sebanyak n
        if (strcmp(posisiDiminta, inputan[i].namaPosisi) == 0){ // mengecek syarat jika dibandingkan string yg diminta dgn data sama maka lanjut
            if ((inputan[i].ratagaji / 1000000 >= 1) && (inputan[i].ratagaji / 1000000 <= 9)){ // mengecek jika rerata gaji pada indeks ke string i itu 1 digit
                cek1digit = 1; // maka nilai marking berubah jadi 1
            }
        }
    }
    return cek1digit; // mengembalikan nilai marking
}

int digit2(int n, char posisiDiminta[100], dataSalary inputan[], int cek2digit){ // mendefinisikan fungsi untuk mengecek apakah dia digit 2
    int i; // var untuk indeks counter
    for (i = 0; i < n; i++){ // melakukan perulangan for sebanyak n
        if (strcmp(posisiDiminta, inputan[i].namaPosisi) == 0){ // mengecek syarat jika dibandingkan string yg diminta dgn data sama maka lanjut
            if ((inputan[i].ratagaji / 1000000 >= 10) && (inputan[i].ratagaji / 1000000 <= 99)){ // mengecek jika rerata gaji pada indeks ke string i itu 2 digit
                cek2digit = 1; // maka nilai marking berubah jadi 1
            }
        }
    }
    return cek2digit; // mengembalikan nilai marking
}

int digit3(int n, char posisiDiminta[100], dataSalary inputan[], int cek3digit){ // mendefinisikan fungsi untuk mengecek apakah dia digit 3
    int i; // var untuk indeks counter
    for (i = 0; i < n; i++){ // melakukan perulangan for sebanyak n
        if (strcmp(posisiDiminta, inputan[i].namaPosisi) == 0){ // mengecek syarat jika dibandingkan string yg diminta dgn data sama maka lanjut
            if ((inputan[i].ratagaji / 1000000 >= 100) && (inputan[i].ratagaji / 1000000 <= 990)){ // mengecek jika rerata gaji pada indeks ke string i itu 3 digit
                cek3digit = 1; // maka nilai marking berubah jadi 1
            }
        }
    }
    return cek3digit; // mengembalikan nilai marking
}

void cetakdolar(int ketebalan){ // mendefinisikan prosedur untuk mencetak char dolar 
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("$"); // cetak char nya
    }
}

void cetakblankspace(int ketebalan){ // mendefinisikan prosedur untuk mencetak char blankspacae 
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf(" "); // cetak char nya
    }
}

void cetakhurufD(int ketebalan){ // mendefinisikan prosedur untuk mencetak char huruf D
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("D"); // cetak char nya
    } 
}

void cetakhurufG(int ketebalan){ // mendefinisikan prosedur untuk mencetak char huruf G 
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("G"); // cetak char nya
    }
}

void cetakhurufA(int ketebalan){ // mendefinisikan prosedur untuk mencetak char huruf A 
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("A"); // cetak char nya
    }
}

void cetakhurufB(int ketebalan){ // mendefinisikan prosedur untuk mencetak char huruf B 
    int j; // var untuk indeks counter
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("B"); // cetak char nya
    }
}

void cetakhurufC(int ketebalan){ // mendefinisikan prosedur untuk mencetak char huruf C 
    int j; // var untuk indeks counter 
    for (j = 0; j < ketebalan; j++){ // melakukan perulangan for sebanyak ketebalan
        printf("C"); // cetak char nya
    }
}

void cetak1diGc(int ketebalan){ // mendefinisikan prosedur untuk mencetak pola 1 diG c
    int i, j; // var untuk indeks counter
    printf("1 diG c\n\n"); // mencetak judul kategori
    // mencetak pola 1 diG c
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 1
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 1
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakhurufG(ketebalan);
        printf("\n"); // diakhiri newline
    }
    
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 2
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 2
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 3
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 3
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufC(ketebalan);
        cetakhurufC(ketebalan);
        printf("\n"); // diakhiri newline
    }
    
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 4
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 4
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufC(ketebalan);
        printf("\n"); // diakhiri newline
    }
    
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 5
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 5
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufC(ketebalan);
        cetakhurufC(ketebalan);
        printf("\n"); // diakhiri newline
    }
}

void cetak2diGb(int ketebalan){ // mendefinisikan prosedur untuk mencetak pola 2 diG b
    int i, j; // var untuk indeks counter
    printf("2 diG b\n\n"); // mencetak judul kategori
    // mencetak pola 2 diG b
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 1
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 1
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 2
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 2
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 3
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 3
        cetakblankspace(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        cetakhurufB(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 4
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 4
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        printf("\n"); // diakhiri newline
    } 

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 5
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 5
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufB(ketebalan);
        cetakhurufB(ketebalan);
        printf("\n"); // diakhiri newline
    }
}

void cetak3diGa(int ketebalan){ // mendefinisikan prosedur untuk mencetak pola 3 diG a
    int i, j; // var untuk indeks counter
    printf("3 diG a\n\n"); // mencetak judul kategori
    // mencetak pola 3 diG a
    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 1
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 1
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakhurufG(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 2
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 2
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 3
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 3
        cetakblankspace(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufA(ketebalan);
        cetakhurufA(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 4
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 4
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufA(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufA(ketebalan);
        printf("\n"); // diakhiri newline
    }

    for (i = 0; i < ketebalan; i++){ // untuk blok horizontal 5
        // memanggil semua prosedur yang dibutuhkan untuk membentuk pola pada baris horizontal 5
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakdolar(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufD(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufG(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakblankspace(ketebalan);
        cetakhurufA(ketebalan);
        cetakhurufA(ketebalan);
        printf("\n"); // diakhiri newline
    }
}