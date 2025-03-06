#include <stdio.h>
#define pi 3.14159

int main(){
	int pilihan;
	float radius,L,K;
	do{
	printf("Ini adalah program untuk menghitung luas dan keliling lingkaran \n");
	printf("apa yang ingin kamu hitung ?\n");
	printf("1.Luas Ligkaran\n");
	printf("2.Keliling Lingkaran\n");
	printf("3.Menghitung Keduanya \n");
	printf("4.tidak ingin menghitung apapun\n");
	
	
	printf("Masukkan pilihan (1-4) = ");
	scanf("%d",&pilihan);
	if(pilihan == 1 || pilihan == 2 || pilihan ==3){
	printf("\nMasukkan radius = ");
	scanf("%f",&radius);
	}
	L = pi*radius*radius;
	K = 2*pi*radius;
	
	
	
	switch (pilihan){
		case 1 :
			printf("Luas Lingkaran = %.2f\n\n",L);
		break;
		case 2 :
			printf("Keliling lingkaran = %.2f\n\n",K);
		break;
	    case 3 :
	    	printf("Luas Lingkaran = %.2f\n",L);
	    	printf("Keliling Lingkaran = %.2f\n\n",K);
	    break;
	    case 4 :
			printf("Sampai jumpa !!!");
		break;	
		default:
			printf("Pilihan Tidak ada");
		break;			
	}
	}
	while(pilihan == 1 || pilihan ==2 || pilihan==3);
	
	printf("\n\n\n\n======Code Execution Successfull =====\n\n\n");
	return 0;
}