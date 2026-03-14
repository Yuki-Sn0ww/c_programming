#include<stdio.h>

int main(void)
{
    int num;
    printf("enter an number = ");
    scanf("%d",&num);
   
    if (num >= 100 && num <= 999)
    {
       printf("the number %d has 3 digits",num);
    }
    else if (num >= 0 && num <= 9)
    {
       printf("the num %d has one digit",num);
    }
    else if (num >= 10 && num <= 99)
    {
       printf("the number %d has two digits",num);
    }
    else if (num >= 1000 && num <= 9999)
    {
       printf("the number %d has four digits",num);
    }
    else 
    {
       printf("the number %d has more than four digits",num);
    }
    return 0;
 
}
