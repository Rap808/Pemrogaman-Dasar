#include <stdio.h>

int main()
{
    int y, m, d;

    printf("Masukkan Tahun: ");
    scanf("%d", &y);

    printf("Masukkan Bulan: ");
    scanf("%d", &m);

    printf("Masukkan Hari: ");
    scanf("%d", &d);

    printf("\nTanggal: %d-%d-%d", d,m,y);

    return 0;
}