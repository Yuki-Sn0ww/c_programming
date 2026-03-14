#include<stdio.h>
int main(void)
{
	int GSI,
	group_identifier,
	publisher_code,
	item_number,
	check_digit;

        printf("enter ISBN :");
	scanf("%d-%d-%d-%d-%d",&GSI,&group_identifier,&publisher_code,&item_number,&check_digit);
	
	printf("ISBN = %d-%d-%d-%d-%d\n",GSI,group_identifier,publisher_code,item_number,check_digit);
	printf("GSI prefix =%d\n group identifier = %d\n publisher code =%d\n item number =%d\n check digit =%d",GSI,group_identifier,publisher_code,item_number,check_digit);

	return 0;
	}
