
#include <stdio.h>

int main (){
	
	int a,b ;
	
	printf("masukkan angka a : ");
	scanf("%i",&a);
	printf("masukkan angka b : ");
	scanf("%i",&b);
	
	int sum = a + b;
	printf("penjumlhan: %d\n",sum);
	
	int different = a-b ;
	printf("pengurangan = %d\n",different);
	
	int product = a*b;
	printf("perkalian = %d\n",product);
	
	if (b != 0){
		float division = a/b;
		printf("pembagian = %2f\n",division);		
	}
	else {
		printf ("error");
		
		
	}
	
	
	
	return 0;
}