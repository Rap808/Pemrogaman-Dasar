#include <stdio.h>
#include <string.h>

int main(){
	char a[1];
	
	printf("masukkan dua karakter ab/ba : ");
	scanf("%2s",&a);
	
	if(strcmp(a,"ab")==0||strcmp(a,"ba")==0){
		printf("silahkan masuk\n");
	}else{
		printf("identifikasi gagal\n");
	}
	return 0;
}