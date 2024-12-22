/* 	Nama File		: 24343060_MuhammadFathurPradana_STRING1_A
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Menghitung Panjang String
*/

#include <stdio.h>
#include <string.h>

// Fungsi untuk menghitung panjang string
int hitungPanjangString(char str[]) {
    return strlen(str); // Menggunakan fungsi strlen untuk menghitung panjang string
}

int main() {
    printf("   Modul 6 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");

    char input[100]; // Buffer untuk menyimpan string dari pengguna

    // Meminta input string dari pengguna
    printf("Masukkan sebuah string: ");
    fgets(input, sizeof(input), stdin);

    // Menghapus karakter newline (\n) jika ada
    input[strcspn(input, "\n")] = 0;

    // Menghitung panjang string dan menampilkan hasil
    int panjang = hitungPanjangString(input);
    printf("Panjang string yang dimasukkan: %d\n", panjang);

    return 0;
}