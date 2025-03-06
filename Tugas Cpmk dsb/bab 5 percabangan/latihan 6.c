#include <stdio.h>

int main(){
	int a;
	printf("Masukkan 4 digit angka = ");
	scanf("%d",&a);
	if(a%4==0 && a%5==0){
		printf("Angka valid");
	}else{
		printf("Angka tidak valid");
	}
	
	return 0;
}