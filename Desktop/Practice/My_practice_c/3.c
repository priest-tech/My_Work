#include<stdio.h>
#include<stdlib.h>
int Addfunction();
int main()
{
    int x, y, i, sum, temp;
   
    printf("Please enter two numbers:\n");
    scanf("%d%d", &x, &y);
 // if (x > y)
  // {
  // temp = x;
  //     x = y;
  //     y = temp;
  //  }
  for ( i = x; i <= y; i++)
  
   printf("%d\n", i);
    
       //for ( i = 1; i < y; i++)
        
        // sum =(sum + i) i++;
            //printf("The sum is:%d\n", sum);
        
       
      
    return 0;
}
int Addfunction()
{
   int sum;
   sum = 0;
  sum += i;
printf("The sum %d", sum);
}