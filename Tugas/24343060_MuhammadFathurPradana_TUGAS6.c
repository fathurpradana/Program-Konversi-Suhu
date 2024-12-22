/* 	Nama File		: 24343060_MuhammadFathurPradana_TUGAS6.c
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 22 November 2024
	Deskripsi		: Program Penghitung Kata pada File Besar
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Untuk mengukur waktu eksekusi

#define MAX_BUFFER 1000 // Ukuran buffer untuk membaca file

// Fungsi untuk menghitung jumlah kata, karakter, dan baris menggunakan fgets()
void hitungFgets(FILE *file, int *jumlahKata, int *jumlahKarakter, int *jumlahBaris) {
    char buffer[MAX_BUFFER];
    char *kata;

    *jumlahKata = *jumlahKarakter = *jumlahBaris = 0;

    // Membaca file baris per baris
    while (fgets(buffer, MAX_BUFFER, file) != NULL) {
        (*jumlahBaris)++; // Tambahkan jumlah baris
        *jumlahKarakter += strlen(buffer); // Hitung karakter dalam baris

        // Tokenisasi untuk menghitung jumlah kata
        kata = strtok(buffer, " \t\n");
        while (kata != NULL) {
            (*jumlahKata)++;
            kata = strtok(NULL, " \t\n");
        }
    }
}

// Fungsi untuk menghitung jumlah kata, karakter, dan baris menggunakan fscanf()
void hitungFscanf(FILE *file, int *jumlahKata, int *jumlahKarakter, int *jumlahBaris) {
    char c;
    char kata[MAX_BUFFER];
    int inWord = 0;

    *jumlahKata = *jumlahKarakter = *jumlahBaris = 0;

    // Membaca file karakter per karakter
    while ((c = fgetc(file)) != EOF) {
        (*jumlahKarakter)++;
        if (c == '\n') {
            (*jumlahBaris)++;
        }
        if (isspace(c)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            (*jumlahKata)++;
        }
    }
}

int main() {
    printf("   Tugas 6 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");
    
    FILE *file;
    char namaFile[100];
    int jumlahKata, jumlahKarakter, jumlahBaris;
    clock_t start, end;
    double waktuFgets, waktuFscanf;

    // Meminta pengguna memasukkan nama file
    printf("Masukkan nama file: ");
    scanf("%s", namaFile);

    // Membuka file
    file = fopen(namaFile, "r");
    if (file == NULL) {
        printf("Gagal membuka file %s.\n", namaFile);
        return 1;
    }

    // Mengukur waktu untuk metode fgets()
    start = clock();
    hitungFgets(file, &jumlahKata, &jumlahKarakter, &jumlahBaris);
    end = clock();
    waktuFgets = (double)(end - start) / CLOCKS_PER_SEC;

    // Menampilkan hasil metode fgets()
    printf("\nMetode fgets():\n");
    printf("Jumlah kata: %d\n", jumlahKata);
    printf("Jumlah karakter: %d\n", jumlahKarakter);
    printf("Jumlah baris: %d\n", jumlahBaris);
    printf("Waktu eksekusi: %.5f detik\n", waktuFgets);

    // Reset file pointer
    rewind(file);

    // Mengukur waktu untuk metode fscanf()
    start = clock();
    hitungFscanf(file, &jumlahKata, &jumlahKarakter, &jumlahBaris);
    end = clock();
    waktuFscanf = (double)(end - start) / CLOCKS_PER_SEC;

    // Menampilkan hasil metode fscanf()
    printf("\nMetode fscanf():\n");
    printf("Jumlah kata: %d\n", jumlahKata);
    printf("Jumlah karakter: %d\n", jumlahKarakter);
    printf("Jumlah baris: %d\n", jumlahBaris);
    printf("Waktu eksekusi: %.5f detik\n", waktuFscanf);

    // Menutup file
    fclose(file);

    return 0;
}