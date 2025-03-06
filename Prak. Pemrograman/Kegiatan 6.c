#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add();
void read();
void update();
void del();

int main(){
	
	int pilihan;
	
	do{
	printf("1. Tambah Produk Baru\n");
	printf("2. Tampilkan Daftar produk\n");
	printf("3. Update Informasi Produk\n");
	printf("4. Hapus Produk\n");
	printf("5. Keluar\n");
	
	printf("Pilih : ");
	scanf("%d",&pilihan);
	
	switch(pilihan){
		case 1 :
			add();
		break;
		case 2 :
			read();
		break;		
	    case 3 :
			update();
		break;
	    case 4 :
			del();
		break;			
	}
	}while(pilihan >0 && pilihan<5);
	printf("\n\n=====Code Execution Successfull=====\n\n");
	return 0;
}

void add(){
	FILE* fptr;
	int i;
	
		char addData[5][30] ={
			("ID Produk : "),
			("Nama Produk : "),
			("Kategori : "),
			("Harga Produk : "),
			("Stok : ")
		};
		char nama[30],id[30];
		char kategori[30],harga[30],stok[30];
		//getchar();
		printf("\nMasukan ID Produk: ");
		scanf("%s",id);
		printf("Masukkan Nama Produk : ");
		scanf("%s",nama);
		printf("Masukkan Kategori Produk : ");
		scanf("%s",kategori);
		printf("Masukkan Harga Produk : ");
		scanf("%s",harga);
		printf("Masukkan Stok Produk : ");
		scanf("%s",stok);
		
		strcat(addData[0],id);
		strcat(addData[1],nama);
		strcat(addData[2],kategori);
		strcat(addData[3],harga);
		strcat(addData[4],stok);
		
		
		fptr = fopen("produk_toko.txt","a");
	
		if(fptr == NULL){
			printf("file tidak berhasil dibuka");
		}else{
			printf("file berhasil dibuka\n");
			
			for(i=0;i<5;i++){
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
	
		char addData[5][30] ;
		fptr = fopen("produk_toko.txt","r");
	
		if(fptr != NULL){
		   	printf("isi data adalah : \n");
		
			while(fgets(addData, sizeof(addData), fptr) != NULL){
				printf("%s", addData);
			}
			printf("\n");
			fclose(fptr);
		}else{
			printf("file gagal dibuka");
		}
	return 0;	
}

void update(){
	
	
}

void del(){
	
	
}