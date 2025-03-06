 #include <stdio.h>
 #define kalori_pria  2400
 #define kalori_wanita  2200
 
 int main (){
	 char gender;
	 float total_kalori, kalori1,kalori2,kalori3;
	 
	 printf("==== program Penghitung kalori Harian ====\n");
	 printf("Program ini akan menghitung total kalori harian yang dikonsumsi.\n\n");
	 
	 printf("\nmasukkan kalori hariaanmu");
	 printf("\nkalori makanan pertama = ");
	 scanf("%f",&kalori1);
	 printf("kalori makanan kedua = ");
	 scanf("%f",&kalori2);
	 printf ("kalori makanan ketiga = ");
	 scanf("%f",&kalori3);
	 
	 printf("masukkan gender (L/P) = ");
	 scanf("%s",&gender);
	 
	 total_kalori = kalori1 + kalori2 + kalori3;
	 
	 if(gender == 'l' || gender == 'L'){
		 
		 printf("\ntotal kalori = %.0f\n",total_kalori);
		 if(total_kalori  > kalori_pria){
			 printf("\nkalori melebihi batas harian \n ");
		 }else{
			 printf("total kalorimu masih aman ");
		 }
    }else if(gender =='P' || gender == 'p'){
		printf("\ntotal kalori = %.0f\n",total_kalori);
		if(total_kalori > kalori_wanita){
			printf("kalorimu melebihi batas harian \n ");
		}else{
			printf("total kalori harianmu masih aman ");
		}
	}else{
		printf("\nTidak Valid ");
	}
	 printf("\n\n\n=== Code Execution Successful ===");
	 return 0;
 }
 