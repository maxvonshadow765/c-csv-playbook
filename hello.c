#include <stdio.h>

int sum(int a, int b){
	return a+b;
}


int main (void)
{
	int d = 5;
	int e = 10;
	int f = d+e;
	printf ("ciao  %d %d\n", sum (3,2), f);
	return 0;

}
