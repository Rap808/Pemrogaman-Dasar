#include <stdio.h>

int main (){
	
	char nama [25];
	int nim;
	float nilai_tugas,nilai_uts,nilai_uas;
	
	printf("--- Program Penghitung Nilai Akhir ---\n");
	printf("Masukkan Namamu : ");
	scanf ("%[^\n]]",&nama);
	
	printf("Masukkan Nim : ");
	scanf("%d",&nim);
	
	printf("Masukkan Nilai Tugas : ");
	scanf("%f",&nilai_tugas);
	
	printf("Masukkan Nilai UTS : ");
	scanf("%f",&nilai_uts);
	
	printf("Masukkan Nilai UAS : ");
	scanf("%f",&nilai_uas);
	
	printf("\n-------------------------------------------------------------\n");
	
	printf("Nama Mahasiswa : %s\n",nama);
    printf("Nim Mahasiswa : %d\n",nim);
 	printf("Nilai Tugas : %.2f\n",nilai_tugas);
    printf("Nilai UTS : %.2f\n",nilai_uts);
    printf("Nilai UAS : %.2f\n",nilai_uas);
    
    float nilai_akhir= 20*nilai_tugas/100+35*nilai_uts/100+45*nilai_uas/100;
    printf("Nilai Akhir :%.2f",nilai_akhir);
    printf("\n-------------------------------------------------------------");
    
	
	
	printf("\n\n\n=== Code execution Successful ===\n");
	
	
	
	
	
	
	
	return 0;
}