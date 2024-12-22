/* 	Nama File		: 24343060_MuhammadFathurPradana_ARRAY_C
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Mengganti Nilai Elemen Array
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
    int indeks, nilaiBaru;

    // Menampilkan array sebelum nilai diganti
    printf("Array sebelum diganti:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    // Meminta input dari pengguna untuk mengganti nilai elemen
    printf("\nMasukkan indeks elemen yang ingin diganti (0-4): ");
    scanf("%d", &indeks);

    // Memastikan indeks berada dalam rentang yang valid
    if (indeks < 0 || indeks >= 5) {
        printf("Indeks tidak valid! Harus antara 0 dan 4.\n");
        return 1; // Menghentikan program jika indeks tidak valid
    }

    printf("Masukkan nilai baru: ");
    scanf("%d", &nilaiBaru);

    // Mengganti nilai elemen pada indeks yang diminta
    angka[indeks] = nilaiBaru;

    // Menampilkan array setelah nilai diganti
    printf("\nArray setelah diganti:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}