#include <stdio.h>
int total_harga(int hargafilm,int hargatiket);
enum film{
   Spiderman = 50000,
   Batman = 55000,
   Superman = 60000,	
   Avenger = 70000,
   Joker = 45000
};
enum tiket{
	Reguler =30000,
	VIP = 100000,
	VVIP = 150000
};
int main(){
	int pilihFilm,pilihTiket;
	char member;
	printf("===== Bioskop =====\n");
	printf("Film : \n");
	printf("1. Spiderman - Rp.%d\n",Spiderman);
	printf("2. Batman - Rp.%d\n",Batman);	
	printf("3. Superman - Rp.%d\n",Superman);	
	printf("4. Avenger - Rp.%d\n",Avenger);	
	printf("5. Joker - Rp.%d\n",Joker);	
	printf("Pilih film (1-5): ");
	scanf("%d",&pilihFilm);
	
	printf("Jenis Tiket: \n");	
	printf("1. Reguler - Rp.%d\n",Reguler);	
	printf("2. VIP - Rp.%d\n",VIP);	
	printf("3. VVIP - Rp.%d\n",VVIP);	
	printf("Pilih jenis tiket (1-3): ");
	scanf("%d",&pilihTiket);
	
	int hargafilm,hargatiket,jenisFilm,jenisTiket;
	
	jenisFilm=(enum film)pilihFilm;
	switch(jenisFilm){
	  case 1 : hargafilm = Spiderman; break;
	  case 2 : hargafilm = Batman; break;
	  case 3 : hargafilm = Superman; break;
	  case 4 : hargafilm = Avenger; break;
	  case 5 : hargafilm = Joker; break;
	  default : printf("tidak valid");break;
	}
	jenisTiket=(enum tiket)pilihTiket;
	switch(jenisTiket){
	  case 1 : hargatiket = Reguler; break;
	  case 2 : hargatiket = VIP; break;
	  case 3 : hargatiket = VVIP; break;
	  default : printf("tidak valid");break;	
	} 
	getchar(); 
    printf("Apakah anda adalah member ? (y/n) : ");
	scanf("%c",&member);
	
 	int hbayar;
 	int total,uang;
 	int *ptr=hbayar;
    hbayar=total_harga(hargafilm,hargatiket); 
    if(member=='y' || member=='Y'){
    	hbayar=hbayar*0.9;
         printf("Yang harus dibayar = Rp.%d\n",hbayar);
	}else{
		 printf("Yang harus dibayar = Rp.%d\n",hbayar);
	}
	printf("alamat memori variabel harga : %p\n",ptr);
	printf("masukkan uang pembayaran : ");
	scanf("%d",&uang);
	total=uang-hbayar;
	if(total>0){
		printf("Kembalian Anda :Rp. %d",total);
	}else if(total==0){
		printf("Terima Kasih.");
	}else{
		printf("uang anda kurang :Rp. %d",total);
	}
	printf("\n\n\n====Code Execution Successfull====\n\n");

	return 0;
}
int total_harga(int hargafilm,int hargatiket){
	int totalb;
	totalb;
	totalb = hargafilm+hargatiket;
	
	return totalb;
}