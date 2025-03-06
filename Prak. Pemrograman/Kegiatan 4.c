#include <stdio.h>

void pembuka();
float transaksi();
int ulang();	

int main(){
    int a;
	do{
    pembuka();
	float c = transaksi();
	printf("total dari transaksi tersebut = %.0f\n",c);
    a = ulang();
	}while (a == 1);
	printf("Terima kasih !\n");
	printf("\n\n=====Code execution Successfull=====\n\n");
	return 0;	
}
void pembuka(){
	printf("=====Pencatatan Transaksi=====\n\n");	
}
float transaksi(){
	float a;
	float total = 0;
    printf("Masukkan Jumlah Transaksi :\n");
    printf("masukkan 0 untuk menyelesaikan transaksi !!!\n");
	do{
	scanf("%f",&a);
	total+=a;
	}while(a != 0);
	return total;
}
int ulang(){
	int l;
	printf("Apakah anda ingin mencatat transaksi lagi (1=ya/0=tidak)\n");
	scanf("%d",&l);
	
	
	return l ;
}