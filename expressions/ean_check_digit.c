#include<stdio.h>

int main(void)
 {    
    long int EAN; 
    int odd_sum,even_sum,total; 

    printf("enter EAN number =");
    scanf("%ld",&EAN);
    
    odd_sum = ((EAN / 100000000000) % 10) + ((EAN / 1000000000) % 10) + ((EAN /10000000) % 10) + ((EAN / 100000) % 10) + ((EAN / 1000) % 10) + (EAN / 10) % 10 ;
    even_sum = ((EAN / 10000000000) % 10) + ((EAN / 100000000) % 10) + ((EAN /    1000000) % 10) + ((EAN / 10000) % 10) + ((EAN / 100) % 10 + EAN % 10);

    total = (3 * even_sum) + odd_sum;
    printf("check digit is = %d",9 - ((total - 1) % 10));


    return 0;

}
