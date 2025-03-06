#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void update();

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
		FILE* fptr;
		fptr = fopen("aku disini.txt","a");
	
		char addData[3][30] ={
			("Nama : "),
			("Nim : "),
			("Program Studi : ")
		};
		char nama[30],prodi[30];
		long long int nim;
		getchar();
		printf("Masukan Nama : ");
		fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0';
		printf("Masukkan Nim : ");
		scanf("%lld",&nim);
		printf("Masukkan Program Studi : ");
		scanf("%s",prodi);
		
	
		if(fptr == NULL){
			printf("file tidak berhasil dibuka");
		}else{
			printf("file berhasil dibuka\n");
			fprintf(fptr,"%s%s\n",addData[0],nama); 
			fprintf(fptr,"%s%lld\n",addData[1],nim);
			fprintf(fptr,"%s%s\n",addData[2],prodi);	
			fclose(fptr);
		
			printf("File Ditutup\n");
		}
	}else if(pilihan == 2){
		FILE *fptr;
	
		char data1[30],data2[30];
		
		fptr = fopen("aku disini.txt","r");
	
		if(fptr != NULL){
		   	printf("isi data adalah : \n");
		
			while(fscanf(fptr,"%[^:]%s",data1,data2)!=EOF){
				
				if(isdigit(data2[0])){
					//int num = atoi(data2);
					printf("%s%lld\n",data1,data2);
				}else{
					printf("%s%s",data1,data2);
				}
			}
			  
			fclose(fptr);
		}else{
			printf("file gagal dibuka");
		}
	}else if(pilihan == 3){
		FILE* fptr = fopen("aku disini.txt","w");
		printf("isi file telah dihapus\n");
	}else if(pilihan == 4){
		const char *filename = "aku disini.txt";
    	const char *nim_target = "12324131";  // NIM yang ingin diubah
    	const char *new_prodi = "Teknik Komputer";  // Prodi baru

    	update(filename, nim_target, new_prodi);
	}else{
		printf("Pilihan Tidak valid");
	}
	
	return 0;
}

void update(const char *filename, const char *nim_target, const char *new_prodi) {
    
	FILE *file = fopen("aku disini.txt", "r");
    if (!file) {
        printf("Gagal membuka file.\n");
        return;
    }

    char temp_filename[] = "temp.txt";
    FILE *temp_file = fopen(temp_filename, "w");
    if (!temp_file) {
        printf("Gagal membuka file sementara.\n");
        fclose(file);
        return;
    }

    char line[256];
    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, nim_target)) {
            // Tulis baris NIM ke file sementara
            fputs(line, temp_file);
            // Baca dan ubah baris berikutnya (Prodi)
            if (fgets(line, sizeof(line), file)) {
                fprintf(temp_file, "Prodi: %s\n", new_prodi); // Ganti Prodi
            }
            found = 1;
        } else {
            fputs(line, temp_file); // Tulis baris lainnya tanpa perubahan
        }
    }

    fclose(file);
    fclose(temp_file);

    // Ganti file asli dengan file sementara
    if (found) {
        remove(filename);
        rename(temp_filename, filename);
        printf("Prodi untuk NIM %s berhasil diubah menjadi %s.\n", nim_target, new_prodi);
    } else {
        remove(temp_filename);
        printf("NIM %s tidak ditemukan.\n", nim_target);
    }
}
