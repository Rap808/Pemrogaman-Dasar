#include <stdio.h>

int main(){
	float a,b,c,d;
	do{
    c+=a;
    b++;
	printf("masukkan angka positif : ");
	scanf("%f",&a);
	}while(a>0);
	
	d=c/(b-1);
	printf("jumlah a = %.0f\n",c);
	printf("rata-rata = %.2f",d);
	
	printf("\n\n\n=====Code Execution Successful=====\n\n\n");
	
	return 0;
} 