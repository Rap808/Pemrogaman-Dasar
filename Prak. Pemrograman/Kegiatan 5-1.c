#include <stdio.h>
#include <string.h>
void judul();

int main(){
	char arrayBuah[10][15];
	char s[15];
	int i,u=0,p,a;
	
	judul();
	do{
	printf("\n\nMasukkan total jumlah buah (Max 10): ");
	scanf("%d",&i);
	}while(i>10);

	do{
		printf("Masukkan nama buah : ");
		scanf("%s",arrayBuah[u]);
		u++;
	}while(u<i);
	printf("Nama buah yang diinput : \n");
	for(a=0;a<i;a++){
		printf("%s\n",arrayBuah[a]);
	}
	for(u=0;u<i-0;u++){
		for(p=u+1;p<i;p++){
			if(strcmp(arrayBuah[u],arrayBuah[p])>0){
				strcpy(s,arrayBuah[u]);
				strcpy(arrayBuah[u],arrayBuah[p]);
				strcpy(arrayBuah[p],s);
			}
		}
	}
	
	printf("\n\nNama buah dalam urutan abjad :\n");
	for(p=0;p<i;p++){
		printf("%s\n",arrayBuah[p]);
	}
	printf("\n\n\n=====Code Execution Successfull=====\n\n\n\n");
	
	return 0;
}
void judul(){
	printf("=====Program Dimulai=====\n");
	printf("program akan memintamu menginput nama buah dan mengurutkannya sesuai Abjad.\n");
}