#include<stdio.h>

int main(void)
{
    float tread_value,price,commission,shares,rival_commission;
    printf("enter number of shares = ");
    scanf("%f",&shares);
    printf("enter price per share = ");
    scanf("%f",&price);
 
    tread_value = shares * price;
    
    if (tread_value  < 2500.00f)
    { 
       commission = 30.00f + 0.17f * tread_value;
    }
    else if (tread_value >= 2500.00f && tread_value <= 6250.00f)
    { 
       commission = 56.00f + .0066f * tread_value;
    }
    else if (tread_value >= 6250.00f && tread_value <= 20000.00f)
    { 
       commission = 76.00f + .0034f * tread_value;
    }
    else if (tread_value >= 20000.00f && tread_value <= 50000.00f)
    { 
       commission = 100.00f + .0022f * tread_value;
    }
    else if (tread_value >= 50000.00f && tread_value <= 500000.00f)
    { 
       commission = 155.00f + .0011f * tread_value;
    }
    
    else 
    { 
       commission = 255.00f + .0009f * tread_value;
    }
  
    if (commission < 39.00f)
    {
       commission = 39.00f;
    }
    if (shares < 2000)
    {
       rival_commission = (shares * 0.03) + 33;
    }
    else
    {
      rival_commission = (shares * 0.02) + 33;
    }
   
    printf("broker's commision is %.2f\n",commission);
    printf("rival broker's commision is %.2f",rival_commission);

    return 0;
 }

