#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE* fptr;
	
	fptr = fopen("produk_toko.txt","w");
	
	if(fptr == NULL){
		printf("File gagal dibuat");
		exit (0);
	}else{
		printf("file berhasil dibuat");
	}
	
	
	return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fptr;
	
	char addString[30] = "Salam Kenal ,Aku Reyhan";
	fptr = fopen("aku disini.txt","a");
	
	if(fptr == NULL){
		printf("file tidak berhasil dibuka");
	}else{
		printf("file berhasil dibuka");
		
		if(strlen(addString)>0){
			fputs(addString, fptr);
			fputs("\n",fptr);
		}
		fclose(fptr);
		
		printf("File Ditutup");
	}
	
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fptr;
	
	char addString[30] ;
	fptr = fopen("aku disini.txt","a");
	
	if(fptr != NULL){
		printf("isi data adalah");
		
		while (fgets(addString, sizeof(addString), fptr) != NULL){
			printf("%s", addString);
		}
		fclose(fptr);
	}else{
		printf("file gagal dibuka");
	}
	
	return 0;
}*/

