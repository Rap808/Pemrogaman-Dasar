#include <stdio.h>

int main(){
	int a,b;
	printf("masukkan 2 angka = \n");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		printf("a lebih besar dari b");
	}
	else if(a==b){
		printf("a sama dengan b");
	}
	else{
		printf("a lebih kecil dari b");
	}
	return 0;
}