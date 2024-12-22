/*
    Nama File       : Tugas2.c
    Programmer      : Muhammad Fathur Pradana
    NIM             : 24343060
    Tgl Pembuatan   : 18 Oktober 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angkaTebakan, tebakan, kesempatan, mainLagi, maxAngka, level, tebakanBenar, skorTertinggi = 0;
    char pilihan;

    printf("   Tugas 2 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : Muhammad Fathur Pradana    |\n");
	printf("|Nim    : 24343060                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");
	
	printf("Permainan Tebak Angka\n");
	printf("=====================\n\n");
    
    // Menginisialisasi generator angka acak
    srand(time(0));

    do {
        // Menambahkan pilihan level kesulitan
        printf("Pilih level kesulitan:\n");
        printf("1. Mudah (1-50)\n");
        printf("2. Normal (1-100)\n");
        printf("3. Sulit (1-200)\n");
        printf("Masukkan pilihan level (1/2/3): ");
        scanf("%d", &level);

        // Mengatur rentang angka berdasarkan level
        switch (level) {
            case 1:
                maxAngka = 50;
                break;
            case 2:
                maxAngka = 100;
                break;
            case 3:
                maxAngka = 200;
                break;
            default:
                printf("Pilihan tidak valid, menggunakan level normal (1-100).\n");
                maxAngka = 100;
                break;
        }

        // Pilih angka acak sesuai level
        angkaTebakan = rand() % maxAngka + 1;
        kesempatan = 5;
        tebakanBenar = 0; // Counter tebakan yang benar
        printf("Selamat datang di permainan Tebak Angka!\n");
        printf("Saya telah memilih sebuah angka antara 1 dan %d.\n", maxAngka);
        printf("Anda memiliki 5 kesempatan untuk menebaknya.\n");

        // Mulai permainan dengan struktur kontrol loop
        while (kesempatan > 0) {
            printf("\nMasukkan tebakan Anda: ");
            scanf("%d", &tebakan);

            tebakanBenar++; // Hitung jumlah tebakan

            // Struktur kontrol if-else untuk mengevaluasi tebakan
            if (tebakan > angkaTebakan) {
                printf("Tebakan Anda terlalu tinggi!");
            } else if (tebakan < angkaTebakan) {
                printf("Tebakan Anda terlalu rendah!");
            } else {
                printf("Selamat! Anda menebak dengan benar dalam %d kali tebakan!\n", tebakanBenar);
                
                // Cek dan perbarui skor tertinggi
                if (skorTertinggi == 0 || tebakanBenar < skorTertinggi) {
                    skorTertinggi = tebakanBenar;
                    printf("Skor tertinggi baru! Anda menebak dengan benar dalam %d kali tebakan.\n", skorTertinggi);
                } else {
                    printf("Skor tertinggi saat ini: %d kali tebakan.\n", skorTertinggi);
                }
                break;
            }

            kesempatan--; // Kurangi jumlah kesempatan
            printf("Kesempatan tersisa: %d\n", kesempatan);
        }

        // Evaluasi akhir jika gagal menebak dalam 5 kesempatan
        if (kesempatan == 0) {
            printf("Maaf, Anda kehabisan kesempatan. Angka yang benar adalah %d.\n", angkaTebakan);
        }

        // Opsi untuk bermain lagi menggunakan switch
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

        switch (pilihan) {
            case 'y':
            case 'Y':
                mainLagi = 1;
                break;
            case 'n':
            case 'N':
                mainLagi = 0;
                printf("Terima kasih telah bermain!\n");
                break;
            default:
                printf("Pilihan tidak valid, keluar dari permainan.\n");
                mainLagi = 0;
                break;
        }

    } while (mainLagi);

    return 0;
}

