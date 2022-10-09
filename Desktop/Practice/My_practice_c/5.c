#include<stdio.h>
#include<float.h>
#include<math.h> 
#include<stdlib.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double Interval, Absolute, Sine_Value;
    double sin(double Interval);
    double abs(double Sine_Value);
    int i;
    for(i = 0; i < 30; i++)
    {
        Interval = i/10.0;
        Sine_Value = sin(Interval);
        Absolute = abs(Sine_Value);
        printf("sin(%lf) = %lf \t", Interval, abs(sin(Interval)));
    }
 printf("\n+++++++\n");
 return 0;   
}