#include <stdio.h>
#include <string.h>

int main(){
	char a[4];
	char b[4];
	printf("masukkan 3 huruf pertama : ");
	scanf("%s",a);
	printf("masukkan 3 huruf kedua : ");
	scanf("%s",b);
	
	
	if(strcmp(a, b) ==0){
		printf("karakter dikenali");
	}else{
		printf("karakter tidak dikenali");
	}
	
	
	return 0;
}