/*
    Nama File       : Modul4.c
    Programmer      : Muhammad Fathur Pradana
    NIM             : 24343060
    Tgl Pembuatan   : 18 Oktober 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bilangan, sisaBagi;

    printf("Tugas Modul 4 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");
	
	printf("Program Menentukan Bilangan Ganjil atau Genap\n");
	printf("=============================================\n\n");

    // Input bilangan
    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    // Proses menghitung sisa bagi, jika sisa bagi == 0 maka bilangan genap
    sisaBagi = bilangan % 2;

    // Proses pengecekan dengan if/else dan output hasilnya
    if (sisaBagi == 1) {
        // Jika sisa bagi 1, bilangan ganjil
        printf("Bilangan %d merupakan bilangan ganjil.\n", bilangan);
    } else {
        // Jika tidak, bilangan genap
        printf("Bilangan %d merupakan bilangan genap.\n", bilangan);
    }

    return 0;
}