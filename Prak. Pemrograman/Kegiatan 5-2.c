#include <stdio.h>

int main(){
	int jumlah_mahasiswa;
	int i,j;
	
	printf("Masukkan Jumlah Mahasiswa :");
	scanf("%d",&jumlah_mahasiswa);
	
    float array_nilai[100][3];//array kosong untuk tempat nilai
	
	for(i=0;i<jumlah_mahasiswa;i++){
		printf("Masukkan Nilai Mahasiswa ke-%d (Matematika,Fisika,Kimia) : \n",i+1);
		for(j=0;j<3;j++){
		scanf("%f",&array_nilai[i][j]);
		}
	}
	printf("\n\nData nilai ujian\n");
	printf("Mahasiswa\tMatematika\tFisika\t\tKimia\n");
	for(i=0;i<jumlah_mahasiswa;i++){
		printf("Mhs-%d\t\t",i+1);
		for(j=0;j<3;j++){
			printf("%.2f\t\t",array_nilai[i][j]);
		}
		printf("\n");
	}
	float Mtk=0,Fisika=0,Kimia=0,All=0;
    for(i=0;i<jumlah_mahasiswa;i++){
			Mtk+=array_nilai[i][0];
	}
	Mtk=Mtk/jumlah_mahasiswa;
	for(i=0;i<jumlah_mahasiswa;i++){
			Fisika+=array_nilai[i][1];
	}
    Fisika=Fisika/jumlah_mahasiswa;
	for(i=0;i<jumlah_mahasiswa;i++){
			Kimia+=array_nilai[i][2];
	}
	Kimia=Kimia/jumlah_mahasiswa;
	for(i=0;i<jumlah_mahasiswa;i++){
		for(j=0;j<3;j++){
			All+=array_nilai[i][j];
		}
	}
	All=All/(jumlah_mahasiswa*3);
	
	printf("\nRata-rata nilai :\n");
	printf("Matematika : %.2f\n",Mtk);
	printf("Fisika : %.2f\n",Fisika);
    printf("Kimia : %.2f\n",Kimia);
    printf("Rata-rata Keseluruhan : %.2f\n",All);
    
    printf("\n\n=====Code Execution Successfull=====\n\n");
		
	return 0;
}