#include <stdio.h>
#include <time.h>

int main() {
    FILE *inputFile, *outputFile;
    int pilihan;
    float suhu, hasil;
    char ulang, satuan;
    clock_t start_time, end_time;
    double execution_time;

    // Catat waktu mulai
    start_time = clock();

    printf("  Tugas PJBL Fundamental Programming \n");
    printf("<====================================>\n");
    printf("|          Identitas diri            |\n");
    printf("|Nama   : Muhammad Fathur Pradana    |\n");
    printf("|Nim    : 24343060                   |\n");
    printf("|Matkul : Fundamental Programming    |\n");
    printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
    printf("<====================================>\n\n");

    do {
        // Tampilan menu
        printf("Program Konversi Suhu\n");
        printf("1. Celsius ke Fahrenheit\n");
        printf("2. Fahrenheit ke Celsius\n");
        printf("3. Input dari file\n");
        printf("Masukkan pilihan (1, 2, atau 3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &suhu);
            hasil = (suhu * 9 / 5) + 32;  // Rumus konversi
            printf("Suhu dalam Fahrenheit: %.4f\n", hasil);
        } else if (pilihan == 2) {
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &suhu);
            hasil = (suhu - 32) * 5 / 9;  // Rumus konversi
            printf("Suhu dalam Celsius: %.4f\n", hasil);
        } else if (pilihan == 3) {
            // Membuka file input_2.txt untuk membaca
            inputFile = fopen("input_2.txt", "r");
            if (inputFile == NULL) {
                printf("File input_2.txt tidak dapat dibuka!\n");
                return 1;
            }

            // Membuka atau membuat file output_2.txt untuk menulis
            outputFile = fopen("output_2.txt", "w");
            if (outputFile == NULL) {
                printf("File output_2.txt tidak dapat dibuat!\n");
                fclose(inputFile);
                return 1;
            }

            // Membaca setiap baris dari file input dan memproses operasinya
            while (fscanf(inputFile, "%f %c", &suhu, &satuan) != EOF) {
                if (satuan == 'C' || satuan == 'c') {
                    hasil = (suhu * 9 / 5) + 32;  // Celsius ke Fahrenheit
                    fprintf(outputFile, "%.4f C = %.4f F\n", suhu, hasil);
                } else if (satuan == 'F' || satuan == 'f') {
                    hasil = (suhu - 32) * 5 / 9;  // Fahrenheit ke Celsius
                    fprintf(outputFile, "%.4f F = %.4f C\n", suhu, hasil);
                } else {
                    fprintf(outputFile, "Format tidak valid: %.4f %c\n", suhu, satuan);
                }
            }

            printf("Proses selesai. Hasil telah disimpan di output_2.txt\n");

            fclose(inputFile);
            fclose(outputFile);
        } else {
            printf("Pilihan tidak valid!\n");
        }

        // Menanyakan apakah pengguna ingin mengulang
        printf("Apakah Anda ingin melakukan konversi lagi? (y/n): ");
        scanf(" %c", &ulang); // Spasi sebelum %c untuk menangkap karakter dengan benar

    } while (ulang == 'y' || ulang == 'Y'); // Ulangi jika pengguna memilih 'y' atau 'Y'

    printf("Terima kasih telah menggunakan program ini.\n");

    // Catat waktu selesai
    end_time = clock();

    // Hitung waktu eksekusi dalam detik
    execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Tampilkan hasil waktu eksekusi
    printf("Waktu eksekusi program : %.6f detik\n", execution_time);

    return 0;
}