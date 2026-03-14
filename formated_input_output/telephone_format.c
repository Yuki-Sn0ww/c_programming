#include<stdio.h>
int main(void)
{
	int xxx1,xxx2,xxxx;

	printf("enter telephone num((xxx)xxx-xxxx) =");
	scanf("(%d)%d-%d",&xxx1,&xxx2,&xxxx);
	
	printf("telephone num in form of  (xxx)xxx-xxxx =(%d)%d-%d \n",xxx1,xxx2,xxxx);
	printf("telephone num in form of  xxx.xxx.xxxx =%3.3d.%3.3d.%4.4d ",xxx1,xxx2,xxxx);
	
	return 0;
	}
	
