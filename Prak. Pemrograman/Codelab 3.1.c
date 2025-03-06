#include <stdio.h>

enum tiket{
	First,
	bisnis,
	ekonomi
};
int main() { 
int umur,p,l;
enum tiket ptiket;
do{
printf("Pesan Tiket Pesawat \n");
printf("1. First class\n");
printf("2. Business class\n");
printf("3. Ekonomi\n");
printf("4. keluar\n");
printf("Pilih jenis tiket : ");
scanf("%d",&p);


ptiket = (enum tiket)p;
switch(ptiket){
	case 1 :
		printf("Kamu memilih tiket kelas pertama");
	break;
	case 2 :
		printf("Kamu memilih tiket kelas bisnis");
	break;
	case 3 :
		printf("kamu memilih tiket kelas ekonomi");
	break;
	default :
		printf("silahkan kembali lagi");
	continue;		
	
}
printf("\nMasukkan umur penumpang: "); 
scanf("%d", &umur);

if (umur >= 0 && umur <= 120) 
{  if (umur < 2) {
printf("Penumpang mendapatkan tiket gratis.\n");
 } else if (umur >= 2 && umur <= 12) {
printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal.\n");
 } else if (umur > 12 && umur <= 60) {
printf("Harga tiket untuk penumpang dewasa adalah harga normal.\n");
 } else { printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal.\n");
}
}else { printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120.\n");
}

printf("\n1 for loop : ");
scanf("%d",&l);
}while(l==1);
return 0;
}
