#include<stdio.h>
int main(void)

{	int num,n1,n2,n3,n4,n5,octal;
	printf("enter a number between 0 and 32767 =");
	scanf("%d",&num);
	n1 = num % 8;
	num /= 8;

	n2 = num % 8;
	num /= 8;

	n3 = num % 8;
	num /= 8;

	n4 = num % 8;
	num /= 8;

	n5 = num % 8;
	octal = n5 * 10000 + n4 * 1000 + n3 * 100 + n2 * 10+ n1;
       printf("octal is :0%d",octal);

	return 0; }



