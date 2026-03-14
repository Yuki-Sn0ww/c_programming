#include<stdio.h>
 
int main (void)
{
        int x,cube,square;
		
	printf("original polynomial : 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("enter value of x :\n");
	scanf("%d",&x);   
	
	square = x*x;
        cube = square*x;

         printf("solution of polynomial with entered value of x : %d\n", 3 *cube * square + 2 * square * square - 5 * cube - square + 7 * x -6 );
	return 0;
                 }

