#include <stdio.h>

int num_mult( int x, int y)
{	
	int mult;
	mult = x * y;
	return mult;
}

int main ()
{
	int mult;
	mult = num_mult(3, 5);
	printf("The multiplication of 3 and 5 is %d \n", mult);
	return 0;
}
