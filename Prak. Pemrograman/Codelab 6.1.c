#include <stdio.h>

int factorial(int a){
	if(a == 0){
		return 1;
	}
	return a* factorial(a-1);
}

int fibonacci(int b){
	if(b<=1){
		return b;
	}	
	return fibonacci(b-1) + fibonacci(b-2);
}

int main(){
	int a,b,i;
	printf("Masukkan angka untuk menghitung faktorial : ");
	scanf("%d",&a);
	printf("faktorial dari %d = %d\n",a,factorial(a));
	printf("Masukkan jumlah elemen : ");
	scanf("%d",&b);
	printf("Deret Fibonacci : ");
	for(i=0;i<b;i++){
		printf("%d\n",fibonacci(i));
	}
	return 0;
} 