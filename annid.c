#include <stdio.h>

void draw_box (int row, int column){
	/*int col; */
	for ( ; row>0 ; row--){
		for ( column = 10 ;column>0 ; column--)
			{printf ("X");}
	printf ("\n");
	}

}


int main (void){
	draw_box(5, 10);
	return 0;
}
