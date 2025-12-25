#include <stdio.h>


int main (void){
	int number = 42;
	int *pNumber = &number;
	*pNumber =10;

printf("%d\n", *pNumber); // Prints: 42
printf("%p\n", &pNumber); // Prints: 42
printf("%p\n", pNumber); // Prints: 42
printf("%p\n", &number); // Prints: 42
}
