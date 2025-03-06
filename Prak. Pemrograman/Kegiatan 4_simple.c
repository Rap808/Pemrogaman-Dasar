#include <stdio.h>

int main(){
	int nominal,ulang;
	do
	{
	int total=0;
	printf("=====Pencatatan Transaksi=====\n\n");
	printf("Masukkan Nominal Transaksi :\n");
	printf("Masukkan 0 untuk mengakhiri !!!\n");
	  do
	   {
        scanf("%d",&nominal);
        total+=nominal;
	   }while(nominal != 0);
	
	printf("Total Dari Transaksi Tersebut : %d\n",total);
	printf("Apakah anda ingin mencatat transaksi lagi (1=ya/0=tidak)\n");
	scanf("%d",&ulang);
	}while(ulang == 1);
	
	printf("Terima Kasih !\n");
    printf("\n\n=====Code execution Successfull=====\n\n");
	
	return 0;
}