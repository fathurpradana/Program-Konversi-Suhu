/*
    Nama File       : Modul5.c
    Programmer      : Muhammad Fathur Pradana
    NIM             : 24343060
    Tgl Pembuatan   : 18 Oktober 2024
*/

#include <stdio.h>
#include <string.h>

int main() {

    printf("Tugas Modul 5 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");
	
	printf("Program Data Mahasiswa\n");
	printf("======================\n\n");
    int i, jumlahPerulangan; // Variabel untuk menyimpan jumlah pengulangan
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &jumlahPerulangan); // Membaca jumlah pengulangan

    for (i = 0; i < jumlahPerulangan; i++) {
        char nama[100];
        char nim[20];
        char prodi[50];
        char universitas[50];
        char alamat[100];

        printf("Sistem informasi data mahasiswa!\n");

        printf("Masukkan nama: "); fflush(stdin);
        scanf("%99[^\n]", nama); // Membaca nama

        getchar(); // Mengatasi masalah buffer agar input berikutnya tidak terlewat

        printf("Masukkan NIM: "); fflush(stdin);
        scanf("%19[^\n]", nim); // Membaca NIM

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan program studi: "); fflush(stdin);
        scanf("%49[^\n]", prodi); // Membaca program studi

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan universitas: "); fflush(stdin);
        scanf("%49[^\n]", universitas); // Membaca universitas

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan alamat: "); fflush(stdin);
        scanf("%99[^\n]", alamat); // Membaca alamat

        // Menampilkan data yang telah dimasukkan
        printf("\nInformasi data mahasiswa yang dimasukkan:\n");
        printf("Nama: %s\n", nama);
        printf("NIM: %s\n", nim);
        printf("Program Studi: %s\n", prodi);
        printf("Universitas: %s\n", universitas);
        printf("Alamat: %s\n", alamat);

        puts("\nTerima kasih atas informasi yang Anda berikan!\n");
    }

    return 0;
}
