#include <stdio.h>
#include <math.h>

int main()

{
double sinValue, x;
printf(" Please Enter the Value to calculate Sine : ");
scanf("%lf", &x);
sinValue = sin(x);
printf("\n The Sine value of %lf = %f ", x, sinValue);
return 0;
}