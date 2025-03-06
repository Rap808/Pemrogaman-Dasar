#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	int b[256]={0};
	int i;
	printf("masukkan sebuah string : ");
	scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		
		if(b[(int)a[i]]){
			printf("\nkarakter %c sudah pernah dikeluarkan",a[i]);
			break;
		}
		printf("%c",a[i]);
		b[(int)a[i]]=1;
	}
	
	return 0;
}