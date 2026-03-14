#include<stdio.h>

int main(void)
{
   int t1,t2;
   printf("enter a 24-hour time = ");
   scanf("%d:%d",&t1,&t2);

   if (t1 <= 12 && t1 >= 1)
   {
      printf("time in 12 hour = %d:%d",t1,t2);
   }
   else if (t1 > 21 && t1 <= 24)
   {
           switch (t1)
           {  
              case 13 : t1 = 1;
                        printf("time in 12 hour = %d:%d",t1,t2);
                        break;
              case 14 : t1 = 2;
                        printf("time in 12 hour = 2:%d",t2);
                        break;
              case 15 : t1 = 3;
                        printf("time in 12 hour = 3:%d",t2);
                        break;
              case 16 : t1 = 4;
                        printf("time in 12 hour = 4:%d",t2);
                        break;
              case 17 : t1 = 5;
                        printf("time in 12 hour = 5:%d",t2);
                        break;
              case 18 : t1 = 6;
                        printf("time in 12 hour = 6:%d",t2);
                        break;
              case 19 : t1 = 7;
                        printf("time in 12 hour = 7:%d",t2);
                        break;
              case 20 : t1 = 8;
                        printf("time in 12 hour = 8:%d",t2);
                        break;
              case 21 : t1 = 9;
                        printf("time in 12 hour = 9:%d",t2);
                        break;
              case 22 : t1 = 10;
                        printf("time in 12 hour = 10:%d",t2);
                        break;
              case 23 : t1 = 11;
                        printf("time in 12 hour = 11:%d",t2);
                        break;
              case 24 : t1 = 12;
                        printf("time in 12 hour = 12:%d",t2);
                        break;
           }
   }
   return 0;
}
