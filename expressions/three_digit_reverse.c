#include<stdio.h>

int main(void)
{
    int num,n1,n2,n3,n4;
    
    printf("enter a three digit number =");
    scanf("%d",&num);
    
    n3 = num%10;
    n4 = num/10;
    n2 = n4%10;
    n1 = n4/10;
    printf("the reversal is =%d%d%d",n3,n2,n1);
    return 0;

}
