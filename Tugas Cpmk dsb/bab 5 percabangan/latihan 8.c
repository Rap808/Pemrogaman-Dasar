#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("masukkan 3 harga barang:");
	scanf("%d%d%d",&a,&b,&c);
	int total,akhir;
	total=a+b+c;
	if(total>100000){
		printf("harga total : %d\n",total);
		printf("harga yang harus dibayar : %d\n",akhir=total*0.9);
	}
	else{
		printf("harga total : %d\n",total);
		printf("harga yang harus dibayar : %d\n",akhir);
	}
	
	
	return 0;
}