#include<stdio.h>
 
int main(void)
	  
{
	double dollars;
	printf("enter amount of dollars-and-cents:" );
	scanf("%lf",&dollars);

	printf("amount without tax added: %lf\n",dollars);
	printf(" tax : 5%\n ");
	printf(" amount with tax added : %lf\n",dollars + 5 );
	 
	return 0;
                      }


