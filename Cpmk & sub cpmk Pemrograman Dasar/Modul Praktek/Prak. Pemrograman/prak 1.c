#include <stdio.h>
  
  int main(){
    
    
    int x,a,c,age;
    float y;
    char nama;

    x = 10;
    a = 7 ;
    c = a + x;
    
    printf("masukkan namamu : ");
    scanf ("%c",&nama);
    printf("masukkan umurmu : ");
    scanf ("%d",&age);
    
    
    
    // Cetak nilai
    printf("Nilai x = %d\n",x);
    printf("-----------\n");
    printf("Nilai a = %d\n",a);
    printf("Nilai x = %d\n",x);
    printf("Nilai c = %d\n",c);
    printf("Nilai a , x dan c = %d,%d,%d\n",a,x,c);
    printf("Namamu adalah = %c\n ",nama);
	printf("umurmu adalah = %d ",age);
    
    




   return 0;
  }

