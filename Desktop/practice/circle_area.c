#include<stdio.h>
#define PI 3.14159
int main(void)
{
	int radius, volume;
	printf("Enter radius:");
	scanf("%d", &radius);
	volume = (4 *radius*radius*radius/3);
	printf("Volume is: %d\n\n", volume);
	return 0;
}
