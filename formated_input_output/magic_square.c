#include<stdio.h>
int main(void)
{
   int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;

   printf("enter number 1 to 16 in any order =");
   scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);
   printf("\n");

   printf("|%2d\t %2d\t %2d\t %2d|\n|%2d\t %2d\t %2d\t %2d|\n|%2d\t %2d\t %2d\t %2d|\n|%2d\t %2d\t %2d\t %2d|\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16);

   int d1, d2 , r1 , r2 , r3 , r4 , c1 , c2 , c3 , c4;

   d1 = n1+n6+n11+n16;
   d2 = n4+n7+n10+n13;

   r1 = n1+n2+n3+n4;
   r2 = n5+n6+n7+n8;
   r3 = n9+n10+n11+n12;
   r4 = n13+n14+n15+n16;

   c1 = n1+n5+n9+n13;
   c2 = n2+n6+n10+n14;
   c3 = n3+n7+n11+n15;
   c4= n4+n8+n12+n16;

   printf("\n");
   printf("rows sum is : %d\t %d\t %d\t %d\n",r1,r2,r3,r4);
   printf("columns sum is : %d\t %d\t %d\t %d\n",c1,c2,c3,c4);
   printf("diagonal sum is : %d\t %d\n",d1,d2);
   printf("\n");
   printf("sum of all rows = %d\n",r1+r2+r3+r4);
   printf("sum of all columns = %d\n",c1+c2+c3+c4);
   printf("sum of all diagonals = %d\n",d1+d2);

   return 0;
}
