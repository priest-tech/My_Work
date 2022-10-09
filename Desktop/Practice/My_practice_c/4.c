#include <stdio.h>
int main()
{
 int speed;
 printf("Enter you speed as an integer:");
 scanf("%d", &speed);
 speed = (speed <= 65)? (65) : (speed <= 70)? (70): (90);
 switch (speed)
 {
 case 65: printf("No speeding Ticket\n\n");break;
 case 70: printf("Speeding Ticked\n\n");break;
 case 90: printf("Expensive speeding Ticket\n\n");break;
 default: printf("Incorrect speed\n\n");
    break;
 }
return 0;
}