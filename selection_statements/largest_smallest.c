#include<stdio.h>

int main(void) {

    int n1,n2,n3,n4;
    printf("enter four integers = ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
   
    if (n1 > n2 && n1 > n3 && n1 > n4)
       printf("%d is maxi",n1);
    else if (n2 > n1 && n2 > n3 && n2 > n4)
       printf("%d is maxi",n2);
    else  if (n3 > n1 && n3 > n2 && n3 > n4)
       printf("%d is maxi",n3);
    else if (n4 > n1 && n4 > n2 && n4 > n3)
       printf("%d is maxi",n4);
    return 0;
}
