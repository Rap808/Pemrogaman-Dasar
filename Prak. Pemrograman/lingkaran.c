#include <stdio.h>
float luas_lingkaran(float radius);
float keliling_lingkaran(float radius);
int main()
{
    float radius;
	float hasil1,hasil2;
	char ulang,pilihan;
	int i=1;
	do{
	printf("apakah kamu ingin menghitung luas dan keliling lingkaran (y/n) =  ");
	scanf("%c",&pilihan);
	//if (pilihan == 'Y' || pilihan == 'y'){
	printf("\n----- Luas & Keliling lingkaran -----\n");
	printf("Masukkan Radius = ");
	scanf("%f",&radius);
	hasil1=luas_lingkaran (radius);
	hasil2=keliling_lingkaran (radius);
	if(radius<0)
	{
		printf("radius harus bernilai positif\n\n");
	}
    else
	{
		printf("hasil luas lingkaran = %.2f\n",hasil1);	
		printf("hasil keliling lingkaran = %.2f\n",hasil2);
	}
	i++;
	}
	while(pilihan=='y');
	//}
    /*else{
		printf("Program selesai");
	}*/
    return 0;
}
float luas_lingkaran(float radius)
{
	float phi,r,L;
	phi=3.14;
	r=radius;
	L=phi*r*r;
    return L;
}
float keliling_lingkaran(float radius)
{
    float phi,r,K;
	phi=3.14;
	K=phi*2*r;
	return K;
}

