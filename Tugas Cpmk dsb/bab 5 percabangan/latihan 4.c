#include <stdio.h>

int main(){
	char a;
	printf("Masukkan huruf = ");
	scanf("%c",&a);
	
	if(a=='a'||a=='i'||a=='u'||a=='e'||a=='o'){
		printf("Hurufmu huruf vokal");
	}
	else{
		printf("Hurufmu huruf konsonan");
	}
	return 0;
}