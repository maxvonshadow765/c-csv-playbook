#include <stdio.h>

void incr (int *point){
    *point = *point +10 ;
}

int main (void){
    int a = 5;
    incr (&a);
    printf ("the new number is %d \n", a );
}