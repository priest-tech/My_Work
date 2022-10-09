#include <stdio.h>
int MySwap(int, int);
int main()
{
    int a, b;
    printf("Please enter any two integers");
    scanf("%d%d", &a, &b);
    printf("Print the value before the swap a = %d, b = %d", a, b);
    MySwap(a, b);
    return 0;
}
int MySwap(int x, int y)
{
    int temp;
   
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);
}