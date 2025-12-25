#include <stdio.h>



void count (int start, int end) {
 if (start > end ) return;
 printf ("%d\n", start);
 count(start+1, end);
}

int main(void) {
    int i = 5;
    { 
	 int i = 8;
	 printf ("i (%zu bytes) is stored at %p\n", sizeof(i), &i);
    }
	 printf ("i (%zu bytes) is stored at %p\n", sizeof(i), &i);
	 count (0,9);
    return 0;
}
