#include <stdio.h>
int main()
{
void recursive_count_down()
{
    int n = 5;
    if (n == 0)
    {
        printf("Blast off\n");
    }
    else
    printf("Time is %d\n", n);
    recursive_count_down(n-1);    
}
}