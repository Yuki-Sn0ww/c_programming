#include<stdio.h>
int main(void)
{
	float loan_amount , interest_rate , monthly_payment , monthly_interest , first_payment , second_payment , third_payment;

        printf("enter amount of loan :");	
	scanf("%f",&loan_amount);

	printf("enter interest rate :");
	scanf("%f",&interest_rate);

	printf("enter monthly payment :");
	scanf("%f",&monthly_payment);
        printf("\n");    
              monthly_interest = (loan_amount * interest_rate/100)/12;
              first_payment = (loan_amount + monthly_interest)-monthly_payment;

              monthly_interest = (first_payment * interest_rate/100)/12;
              second_payment = (first_payment + monthly_interest)-monthly_payment;

              monthly_interest = (second_payment * interest_rate/100)/12; 
	      third_payment = (second_payment + monthly_interest)-monthly_payment;

              printf("balance remaining after first payment :%.2f\n",first_payment);
              printf("balance remaining after second payment :%.2f\n",second_payment);
              printf("balance remaining after third payment :%.2f\n",third_payment);
	
	return 0;
}
