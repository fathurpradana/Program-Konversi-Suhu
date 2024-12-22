#include <stdio.h>

// Deklarasi variabel global untuk menghitung langkah
int totalLangkah = 0;

// Fungsi rekursif untuk Menara Hanoi
void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        totalLangkah++;  // Tambahkan langkah setiap kali ada pemindahan
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    totalLangkah++;  // Tambahkan langkah
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    printf("Tugas 3 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");

    int cakram;

    // Meminta input jumlah cakram dari pengguna
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);

    // Panggil fungsi rekursif untuk Menara Hanoi
    printf("Langkah-langkah untuk memindahkan %d cakram:\n", cakram);
    hanoi(cakram, 'A', 'C', 'B');
    // 'A' adalah tiang asal, 'C' adalah tiang tujuan,'B' adalah tiang bantu

    // Tampilkan jumlah total langkah
    printf("Total langkah yang diperlukan: %d\n", totalLangkah);

    return 0;
}