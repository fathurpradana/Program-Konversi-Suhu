/* 	Nama File		: 24343060_MuhammadFathurPradana_ARRAY_A
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Menampilkan Elemen Array
*/

#include <stdio.h>

int main() {
    printf("   Modul 7 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");

    // Deklarasi dan inisialisasi array
    int angka[5] = {10, 20, 30, 40, 50};

    // Menampilkan semua elemen array menggunakan loop
    printf("Elemen-elemen array angka:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}