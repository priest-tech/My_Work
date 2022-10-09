#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i;
int *ptr;
int sum = 0;
printf("Enter how many numbers you wish to enter:");
scanf("%d", &n);
ptr = malloc(n * sizeof(int));
for ( i = 0; i < n; i++)
{
ptr[i] = i + 1;
sum += ptr[i];

}
printf("The sum of the integers are %d\n", sum);

return 0;

}
