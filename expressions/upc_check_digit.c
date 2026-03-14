#include<stdio.h>

int main(void)
 {    
    long int upc; 
    int odd_sum,even_sum,total; 

    printf("enter first group of five digits =");
    scanf("%ld",&upc);
    
    odd_sum = ((upc / 10000000000) % 10) + ((upc / 100000000) % 10) + ((upc /1000000) % 10) + ((upc / 10000) % 10) + ((upc / 100) % 10) + upc % 10 ;
    even_sum = ((upc / 1000000000) % 10) + ((upc / 10000000) % 10) + ((upc /    100000) % 10) + ((upc / 1000) % 10) + ((upc / 10) % 10);
;
    total = (3 * odd_sum) + even_sum;
    printf("check digit is = %d",9 - ((total - 1) % 10));


    return 0;
}
