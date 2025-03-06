#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Add();
void Read();
void Delete();

int main(){
	
	int pilihan;
	int i;
	
	printf("Pilih apa yang ingin kamu lakukan : \n");
	printf("1. Tulis Data Mahasiswa\n");
	printf("2. Baca Data Mahasiswa\n");
	printf("3. Hapus semua Data\n");
	
	printf("\nMasukkan pilihan : ");
	scanf("%d",&pilihan);
	
	if(pilihan == 1){
		add();
	}else if(pilihan == 2){
		read();
	}else if(pilihan == 3){
		Delete();
	}else{
		printf("Pilihan Tidak valid");
	}
	
	return 0;
}

void add(){
	
	FILE* fptr;
	int i;
	
		char addData[3][30] ={
			("Nama : "),
			("Nim : "),
			("Program Studi : ")
		};
		char nama[30],prodi[30];
		char nim[30];
		getchar();
		printf("Masukan Nama : ");
		fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0';
		printf("Masukkan Nim : ");
		scanf("%s",nim);
		printf("Masukkan Program Studi : ");
		scanf("%s",prodi);
		
		strcat(addData[0],nama);
		strcat(addData[1],nim);
		strcat(addData[2],prodi);
		
		
		fptr = fopen("aku disini.txt","a");
	
		if(fptr == NULL){
			printf("file tidak berhasil dibuka");
		}else{
			printf("file berhasil dibuka\n");
			
			for(i=0;i<3;i++){
				if(strlen(addData[i])>0){
					fputs(addData[i], fptr);
					fputs("\n",fptr);
				}
			}
			fclose(fptr);
		
			printf("File Ditutup\n");
		}
	return 0;	
}

void read(){
	FILE* fptr;
	
		char addData[3][30] ;
		fptr = fopen("aku disini.txt","r");
	
		if(fptr != NULL){
		   	printf("isi data adalah : \n");
		
			while(fgets(addData, sizeof(addData), fptr) != NULL){
				printf("%s", addData);
			}
			fclose(fptr);
		}else{
			printf("file gagal dibuka");
		}
	return 0;	
}

void Delete(){
	FILE* fptr = fopen("aku disini.txt","w");
	printf("isi file telah dihapus\n");
	
	return 0;
}