#include<stdio.h>
 
int main(void)

	//to calculate volume of a sphere
	// r=radius of sphere
{
	int r = 10;
	float volume;
	volume = ((4.0f/3.0f)*pi*r*r*r);
	
	printf("radius(meter) : 10\n ");
	printf("volume of sphere : 4/3 * pi * r * r * r\n");
	printf("volume : %f\n",volume);
	
	return 0;
}

	
