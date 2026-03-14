#include<stdio.h>
int main(void)
{
	int item_num;
	float unit_price;
	int month,day,year;
        int purchase_date;
	printf("enter item number =");
	scanf("%d",&item_num);

	printf("enter unit price =");
	scanf("%f",&unit_price);

	printf("enter purchase date (mm/dd/yyyy)=");
	scanf("%d/%d/%d/",&month,&day,&year);

	printf("itemti\tunit\tpurchase\n\tprice\tdate\n");
	printf("%d\t%.2f\t%.2d/%.2d/%.4d",item_num,unit_price,month,day,year);
	return 0;
	}

