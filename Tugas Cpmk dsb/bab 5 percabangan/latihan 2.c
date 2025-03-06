#include <stdio.h>

int main(){
	int a;
	printf("Saklar Lampu ON(1)/OFF(0) = \n");
	scanf("%d",&a);
	
	if(a==1){
		printf("Lampu on");
	}
	else if(a==0){
		printf("Lampu Off");
	}
	else{
		printf("Tidak valid");
	}
	return 0;
}