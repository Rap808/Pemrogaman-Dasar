#include <stdio.h>


int main(){
	char arr_nama[5][10]={
		"Alice",
		"Bob",
		"charlie",
		"David",
		"Eva"
	};
	int arr_nilai[5]={85,90,78,92,88};
	
	int i;
	
	printf("Daftar nilai siswa sebelum diubah :\n");
	for (i=0;i<5;i++){
		printf("%s: %d\n",arr_nama[i],arr_nilai[i]);	
	}
    arr_nilai[3]=95;
	
	printf("\nDaftar nilai siswa setelah diubah :\n");
	for (i=0;i<5;i++){
		printf("%s: %d\n",arr_nama[i],arr_nilai[i]);
	}
	
	printf("\n\n\n=====Code Execution Successfull=====\n\n");
	
	
	return 0;
}