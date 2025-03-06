#include <stdio.h>
#include <string.h>

void add();
void read();
void update();
void del();

int main(){
    int pilihan;
    	printf("=== Selamat Datang di program Manajemen Toko Elektronik ===\n");
    do {
        printf("\nPilih Menu:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                add();
                break;
            case 2:
                read();
                break;
            case 3:
            	update();
            	break;
            case 4:
            	del();
            	break;
            case 5:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }while (pilihan != 5);
	return 0;
}

void add(){
	FILE *file = fopen("produk_toko.txt", "a+");
/*	if(file == NULL){
        printf("File gagal dibuka.\n");
        return;
    }*/
    char id[50], nama[50], kategori[50];
    int harga, stok;
    
    printf("\nTambah Produk Baru:\n"); 
    printf("Masukkan ID produk: ");
	scanf("%s", id);
	
	char tempId[50], tempNama[50], tempKategori[50];
	int tempHarga, tempStok;
    while(fscanf(file, "%s %s %s %d %d", tempId, tempNama, tempKategori, &tempHarga, &tempStok) != EOF){
        if (strcmp(tempId, id) == 0) {
            printf("ID SUDAH TERDAFTAR. Masukkan ID yang berbeda.\n");
            fclose(file);
            return;
        }
    }	
	printf("Masukkan nama produk: ");
	scanf("%s", nama);
	printf("Masukkan kategori produk: ");
	scanf("%s", kategori);
	printf("Masukkan harga produk: ");
	scanf("%d", &harga);
	printf("Masukkan stok produk: ");
	scanf("%d", &stok);
	
	fprintf(file, "%s\n", id);
	fprintf(file, "%s\n", nama);
    fprintf(file, "%s\n", kategori);
    fprintf(file, "%d\n", harga);
    fprintf(file, "%d\n", stok);
	printf("\n(Produk berhasil ditambahkan!!)\n");
	
    fclose(file);
}
	
void read(){
	FILE *file = fopen("produk_toko.txt", "r");
	if(file == NULL){
		printf("Data produk tidak ada!\n");
        return;
	}

	char id[50], nama[50], kategori[50];
    int stok;
    float harga;
	printf("\nDaftar Produk:\n");
    while(fscanf(file, "%s %s %s %f %d", id, nama, kategori, &harga, &stok) != EOF){
        printf("ID: %s\n", id);
        printf("Nama: %s\n", nama);
        printf("Kategori: %s\n", kategori);
        printf("Harga: Rp %.2f\n", harga);
        printf("Stok: %d\n", stok);
        printf("-------------------------\n");
    }
    fclose(file);
} 

void update(){
	FILE *file = fopen("produk_toko.txt", "r+");
	if(file == NULL){
		printf("Data produk tidak ada!\n");
        return;
	}
	    
	char idProduk[50];
    printf("\nMasukkan ID produk yang ingin diupdate: ");
    scanf("%s", idProduk);
    
    char id[50], nama[50], kategori[50];
    int harga, stok;
    FILE *tempFile = fopen("temp.txt", "w");
    int found = 0;
    
    while(fscanf(file, "%s %s %s %d %d", id, nama, kategori, &harga, &stok) != EOF){
        if(strcmp(id, idProduk) == 0) {
            found = 1;
            
            printf("Masukkan nama baru: ");
            scanf("%s", nama);
            printf("Masukkan kategori baru: ");
            scanf("%s", kategori);
            printf("Masukkan harga baru: ");
            scanf("%d", &harga);
            printf("Masukkan stok baru: ");
            scanf("%d", &stok);
        }
        fprintf(tempFile, "%s %s %s %d %d\n", id, nama, kategori, harga, stok);
    }

    fclose(file);
    fclose(tempFile);
    
    if(found){
        remove("produk_toko.txt");
        rename("temp.txt", "produk_toko.txt");
        printf("Produk berhasil diupdate!\n");
    }else{
        remove("temp.txt");
        printf("Produk dengan ( ID %s ) tidak ditemukan.\n", idProduk);
    }
}

void del(){
	FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Data produk tidak ada!\n");
        return;
    }
    char idProduk[50];
    printf("\nMasukkan ID produk yang ingin dihapus: ");
    scanf("%s", idProduk);
    
    char id[50], nama[50], kategori[50];
    int harga, stok;
    FILE *tempFile = fopen("temp.txt", "w");
    int found = 0;
    
    while(fscanf(file, "%s %s %s %d %d", id, nama, kategori, &harga, &stok) != EOF){
        if(strcmp(id, idProduk) == 0) {
            found = 1;
			continue;
        }
        fprintf(tempFile, "%s %s %s %d %d\n", id, nama, kategori, harga, stok);
    }
    
    fclose(file);
    fclose(tempFile);

    if(found){
		remove("produk_toko.txt");
        rename("temp.txt", "produk_toko.txt");
        printf("Produk berhasil dihapus!\n");
    }else{
        remove("temp.txt");
		printf("Produk dengan ( ID %s ) tidak ditemukan.\n", idProduk);
    }
}
