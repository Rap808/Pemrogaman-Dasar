#include <stdio.h>

int main(){
	int d,m,j;
	char a,b;
	
	printf("masukkan input seperti (7:15:15)jam:menit:detik : ");
	scanf("%d%c%d%c%d",&j,&a,&m,&b,&d);
	
	
	if(j<=24){
		if(m<=60){
			if(d<=60){
				printf("%d%c%d%c%d\n",j,a,m,b,d);
				printf("jam valid");	
			}
			else{
				printf("tidak valid");
			}
		}
		else{
			printf("tidak valid");
		}
	}
	else{
		printf("tidak valid");
	}
	
	
	
	return 0;
}