#include<stdio.h>
 
int main (void)
{
        int x;
		
	printf("original polynomial : ((((3x + 2)x -5)x - 1)x + 7)x -6\n");
	printf("enter value of x :\n");
	scanf("%d",&x);   
	printf("solution of polynomial with entered value of x : %d\n", ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6 );

	return 0;
                 }
