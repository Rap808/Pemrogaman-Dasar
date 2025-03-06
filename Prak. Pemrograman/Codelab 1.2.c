#include <stdio.h>

int main (){
	
	char nama [50];
	int umur ;
	float gaji_pokok;
	
	printf ("masukkan nama : ");
    gets(nama);
	
	printf("masukkan umur : ");
	scanf("%d",&umur);
	
	printf("masukkan gaji pokok : ");
	scanf("%f",&gaji_pokok);
	
	float tunjangan = gaji_pokok * 0.1;
	float total_gaji = gaji_pokok + tunjangan;
	
	printf("nama : %s\n",nama);
	printf("umur : %d\n",umur);
	printf("Gaji pokok : %.2f\n",gaji_pokok);
	printf("Tunjangan : %.2f\n",tunjangan);
	printf("Total Gaji : %.2f\n",total_gaji);
	
	
	
	
	
	
	
	return 0;
}