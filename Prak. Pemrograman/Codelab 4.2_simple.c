#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	int i,j;
	int ada;
	printf("masukkan sebuah string : ");
	fgets(a, sizeof(a), stdin);
	for(i=0;i<strlen(a);i++){
		for(j=0;j<i;j++){
		if(a[j]==a[i]){
			ada=0;
			printf("\nkarakter %c sudah pernah dikeluarkan",a[i]);
			break;
		}
		}
		if(!ada){
			continue;
		}
		printf("%c",a[i]);
		
	}
	
	return 0;
}