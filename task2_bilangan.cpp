#include <stdio.h>
int main() {
    int x;
	printf("Inputkan sebuah Number: ");
	scanf("%d", &x);

	
	   if(x == 0){
			printf("Positif\n");
		} 
		else if(x < 0 && (x%2) != 0) 
		{
			printf("Negatif Ganjil\n");
		} 
		else if(x < 0 && (x%2) == 0) 
		{
			printf("Negatif Genap\n");
		} 
		else if(x > 0 && (x%2) != 0) 
		{
			printf("Positif Ganjil\n");
		} 
		else if(x > 0 && (x%2) == 0) 
		{
			printf("Positif Genap\n");
		} 	
	
	return 0;
}
