#include <stdio.h>

int main (void){
	int a = 5;
	int *pa = &a;
	*pa = *pa + 1;
	printf("this is the value of a %d \n", a);
	printf("this is the address value of a %p \n", &a);
	printf("this is the value of its poitnter pa %d \n", *pa);
	printf("this is the value of pointer pa %p \n", pa);
	printf("this is the adress value of ts poitnter pa %p \n", &pa);
}
