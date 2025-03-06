#include <stdio.h>
#include <string.h>
int main(){
	char a[4];
	do{
	printf("masukkan abjad sesuai urutan yaitu 'abcd' : ");
	scanf("%4s",a);
	
	if(strcmp(a,"abcd")==0){
		printf("proses berhasil\n");
	}else{
		printf("masukkan lagi\n");
	}
	}while(strcmp(a,"abcd")!=0);
	
	return 0;
}