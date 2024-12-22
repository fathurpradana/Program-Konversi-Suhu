/* 	Nama File		: 24343060_MuhammadFathurPradana_STRING1_C
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Membandingkan Dua String
*/

#include <stdio.h>
#include <string.h>

// Fungsi untuk membandingkan dua string
int bandingkanString(char str1[], char str2[]) {
    return strcmp(str1, str2); // Menggunakan fungsi strcmp untuk membandingkan dua string
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

    char input1[100]; // Buffer untuk string pertama
    char input2[100]; // Buffer untuk string kedua

    // Meminta dua input string dari pengguna
    printf("Masukkan string pertama: ");
    fgets(input1, sizeof(input1), stdin);

    printf("Masukkan string kedua: ");
    fgets(input2, sizeof(input2), stdin);

    // Menghapus karakter newline (\n) jika ada
    input1[strcspn(input1, "\n")] = 0;
    input2[strcspn(input2, "\n")] = 0;

    // Membandingkan kedua string dan menampilkan hasil
    int hasil = bandingkanString(input1, input2);
    if (hasil == 0) {
        printf("Kedua string sama.\n");
    } else {
        printf("Kedua string berbeda.\n");
    }

    return 0;
}