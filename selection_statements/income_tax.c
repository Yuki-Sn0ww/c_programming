#include<stdio.h>

int main(void)
{
    float income,tax;
    printf("enter amount of taxable income (in dolars) = ")
    scanf("$%f",&income);
   
    if (income == 750)
    {
       tax = ( 1 / 100 ) * income;
    }
    else if (income >= 750 && income <= 2250)
    {
       tax = (2 / 100) * income + 7.50;
    }
    else if (income >= 2250 && income <= 3750)
    {
       tax = (3 / 100) * income + 37.50;
    }
    else if (income >= 3750 && income <= 5250 )
    {
       tax = (4 / 100) * income + 82.50;
    }
    else if (income >= 5250 && income <= 7000 )
    {
       tax = (5 / 100) * income + 142.50;
    }
    else if (income >= 7000)
    {
       tax = (6 / 100) * income + 230.00;
    }
  
    return 0;
}
