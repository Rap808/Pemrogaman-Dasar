#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	
	bool flagtrue = true;
	bool flagfalse = false;
	
	printf("Boolean Values Demonstration : \n");
	printf("flagtrue : %d\n",flagtrue);
	printf("flagfalse : %d\n",flagfalse);
	
	char greeting[] = "Hello World ! ";
	char Copygreeting[20];
	strcpy(Copygreeting,greeting);
	
	printf("\nString operation : \n");
	printf("original greeting : %s\n",greeting);
	printf("Copied greeting : %s\n",Copygreeting);
	
	int number = 100;
	int *pointer = &number;
	
	printf("\nPointer Demonstration :\n");
    printf("Value of Number : %d\n",number);
    printf("Address of Number : %p\n",&number);
 	printf("Value of pointer : %p\n",pointer);
 	printf("Value Pointed by Pointer : %d\n",*pointer);
	
	
	
	
	
	return 0;
}