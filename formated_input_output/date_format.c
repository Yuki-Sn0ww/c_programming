#include<stdio.h>

int main(void)
{
         int month,day,year;

	 printf("enter month/day/year =");
	 scanf("%d/%d/%d",&month,&day,&year);

	 printf("month/day/year = %2.2d/%2.2d/%4.4d\n",month,day,year);
	 printf("year/month/day =%4.4d%2.2d%2.2d\n",year,month,day);

	 return 0;
	 }


