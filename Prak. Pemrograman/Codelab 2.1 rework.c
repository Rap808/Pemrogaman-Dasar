#include <stdio.h>
#include <string.h> 

#define kalori_pria  2400
#define kalori_wanita  2200

int main() {
    char gender[10]; 
    float total_kalori, kalori1, kalori2, kalori3;

    printf("==== Program Penghitung Kalori Harian ====\n");
    printf("Program ini akan menghitung total kalori harian yang dikonsumsi.\n\n");

    printf("Masukkan kalori harianmu\n");
    printf("Kalori makanan pertama = ");
    scanf("%f", &kalori1);
    printf("Kalori makanan kedua = ");
    scanf("%f", &kalori2);
    printf("Kalori makanan ketiga = ");
    scanf("%f", &kalori3);

    printf("Masukkan gender (pria/wanita) = ");
    scanf("%s", gender); 

    total_kalori = kalori1 + kalori2 + kalori3;

    if (strcmp(gender, "pria") == 0 || strcmp(gender, "Pria") == 0) {
        printf("Total kalori = %.2f\n", total_kalori); 
        if (total_kalori >= kalori_pria) {
            printf("\nKalori melebihi batas harian.\n");
        } else {
            printf("Total kalorimu masih aman.\n");
        }
    } else if (strcmp(gender, "wanita") == 0 || strcmp(gender, "Wanita") == 0) {
        printf("Total kalori = %.2f\n", total_kalori);
        if (total_kalori > kalori_wanita) {
            printf("Kalorimu melebihi batas harian.\n");
        } else {
            printf("Total kalori harianmu masih aman.\n");
        }
    } else {
        printf("Input gender tidak valid. Harap masukkan 'pria' atau 'wanita'.\n");
    }

    printf("\n\n=== Eksekusi Kode Berhasil ===\n");
    return 0;
}
