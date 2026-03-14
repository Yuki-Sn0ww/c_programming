#include<stdio.h>
int main(void)
    {
    int num,n1,n2;
    
    printf("enter a two digit number =");
    scanf("%d",&num);
    n2 = num%10;
    n1 = num/10;

    printf("reverse of number entered by you =%d%d",n2,n1);
    return 0;


}
