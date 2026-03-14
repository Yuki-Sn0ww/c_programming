#include<stdio.h>

int main(void)
       {
	int dollar,twenty_bills,ten_bills ,five_bills,one_bills,value;

	printf("enter amount of dollars\n");
	scanf("%d",&dollar);
        twenty_bills = dollar/20;
	value = (dollar - twenty_bills*20);



	ten_bills = value/10;
	value = (value - ten_bills*10);

	five_bills = value/5;
	value = (value - five_bills*5);

	one_bills = value/1;

	

	printf("twentybills needed : %d\n",twenty_bills);
        printf("tenbills needed : %d\n",ten_bills);	
	printf("fivebills needed : %d\n",five_bills);
        printf("onebills needed : %d\n",one_bills);	
	return 0;
       }
