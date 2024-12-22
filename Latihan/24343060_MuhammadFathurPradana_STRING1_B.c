/* 	Nama File		: 24343060_MuhammadFathurPradana_STRING1_B
	Programmer		: Muhammad Fathur Pradana
	Tgl. pembuatan	: Jumat, 08 November 2024
	Deskripsi		: Program Menggabungkan Dua String
*/

#include <stdio.h>
#include <string.h>

// Fungsi untuk menggabungkan dua string
void gabungkanString(char hasil[], char str1[], char str2[]) {
    strcpy(hasil, str1);      // Menyalin string pertama ke dalam hasil
    strcat(hasil, str2);      // Menggabungkan string kedua ke hasil
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
    char hasil[200];  // Buffer untuk hasil penggabungan

    // Meminta dua input string dari pengguna
    printf("Masukkan string pertama: ");
    fgets(input1, sizeof(input1), stdin);

    printf("Masukkan string kedua: ");
    fgets(input2, sizeof(input2), stdin);

    // Menghapus karakter newline (\n) jika ada
    input1[strcspn(input1, "\n")] = 0;
    input2[strcspn(input2, "\n")] = 0;

    // Menggabungkan kedua string dan menampilkan hasil
    gabungkanString(hasil, input1, input2);
    printf("Hasil penggabungan: %s\n", hasil);

    return 0;
}