#include <stdio.h>

int main(){
	
	int arr_produk[2][3]={
	{5,8,6},
	{3,7,9}
	};
	int i,j;
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t",arr_produk[i][j]);
		}
	}
	
	printf("\n\nTotal pejualan untuk setiap produk :\n");
	printf("Produk A = %d\n",arr_produk[0][0]+arr_produk[1][0]);
	printf("Produk B = %d\n",arr_produk[0][1]+arr_produk[1][1]);
	printf("Produk C = %d\n",arr_produk[0][2]+arr_produk[1][2]);
	
	printf("\n\n=====Code Execution Successfull=====\n\n");
	
	return 0;
}
