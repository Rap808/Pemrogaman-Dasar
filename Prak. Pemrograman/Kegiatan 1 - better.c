#include <stdio.h>

int main (){
	
	char nama [25];
	long long int nim;//untuk angka yang tidak bisa ditampung int
	float nilai_tugas,nilai_uts,nilai_uas;
	
	printf("--- Program Penghitung Nilai Akhir ---\n");
	printf("Masukkan Namamu : ");
	gets (nama);
	
	printf("Masukkan Nim : ");
	scanf("%lld",&nim);
	
	printf("Masukkan Nilai Tugas (0-100) : ");
	scanf("%f",&nilai_tugas);
	
	printf("Masukkan Nilai UTS (0-100) : ");
	scanf("%f",&nilai_uts);
	
	printf("Masukkan Nilai UAS (0-100) : ");
	scanf("%f",&nilai_uas);
	
	printf("\n-------------------------------------------------------------\n");
	

	
	float nilai_akhir= 0.2*nilai_tugas + 0.35*nilai_uts + 0.45 *nilai_uas;
    
    if (  101 >nilai_tugas && nilai_tugas >0 &&101 >nilai_uts && nilai_uts >0 && 101 >nilai_uas && nilai_uas >0){
	
	printf("Nama Mahasiswa : %s\n",nama);
    printf("Nim Mahasiswa : %lld\n",nim);
 	printf("Nilai Tugas : %.2f\n",nilai_tugas);
    printf("Nilai UTS : %.2f\n",nilai_uts);
    printf("Nilai UAS : %.2f\n",nilai_uas);	
    printf("Nilai Akhir :%.2f",nilai_akhir);
    printf("\n-------------------------------------------------------------");
    
	
	
	printf("\n\n\n\033[32m=== Code execution Successful ===\033[0m\n");
	
	}
	
	else{
		
		printf("\n\n\033[31m< Nilai yang kamu masukkan tidak valid !!! >\033[0m\n");
	}
	
	
	
	
	
	
	
	return 0;
}