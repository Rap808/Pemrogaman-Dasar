#include <stdio.h>

int main(){
	float a;
	printf("Masukkan Tinggi Air(dalam meter) = ");
	scanf("%f",&a);
	
	if(a<=500){
		printf("AMAN");
	}
	else if(a>500 && a<600){
		printf("WASPADA");
	}
	else if(a>600 && a<650){
		printf("SIAGA 2");
	}
	else{
		printf("SIAGA 1");
	}
	return 0;
}