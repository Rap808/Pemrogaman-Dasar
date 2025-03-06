#include <stdio.h>

enum class {
	economy,
	business,
	firstclass
};
int main(){
	enum class pilihkelas;
	int pilihan;
	printf("Pilih kelas tiket: \n");
	printf("1. Economy\n");
	printf("2. Business\n");
	printf("3. First Class\n");
	
	printf("Masukkan pilihan (1-3):");
	scanf("%d",&pilihan);
	
	
    pilihkelas=(enum class)pilihan;
	switch(pilihkelas)
	{
	case 1:
		printf("Harga tiket kelas ekonomi: $300 ");
		break;
	case 2 :
		printf("Harga tiket kelas bisnis: $500");
		break;
	case 3:
		printf("Harga tiket kelas pertama: $700");
		break;
	}
	printf("\n\n\Code Execution Successfull ===\n\n");
	
	return 0;
}