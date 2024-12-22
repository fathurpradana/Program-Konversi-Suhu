/* 	Nama File		: 24343060_MuhammadFathurPradana_ARRAY_B
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Menjumlahkan Elemen Array
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
    int jumlah = 0; // Variabel untuk menyimpan hasil penjumlahan

    // Menampilkan bilangan yang dijumlahkan
    printf("Bilangan dalam array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
        jumlah += angka[i];
    }

    // Menampilkan hasil penjumlahan
    printf("\nJumlah semua elemen array: %d\n", jumlah);

    return 0;
}