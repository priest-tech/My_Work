
#include <stdio.h>
int main(void)
{
char name[30];
float x, d, t, e, o, f, i, s, b, n,z,z1,z2,z3,z4, z5, z6,z7,p,g,fu,hg;
printf("\nWhat is your name?\n");
scanf("%s", name);
printf("\nHow much is your income on average?\n");
scanf("%f",&x);
o = (0.1*x);
printf("\nYou worked hard %s this should go to you Ksh: %f\n\n",name, o);
		d = (0.1*x);
				printf("\nThis is what can go to clear your debts %s Ksh: %f\n\n",name, d);
				
				t = (0.1*x);
				printf("\nThis can go to tithe %f\n\n", t);
				
				e = (0.7*x);
				printf("\nNow this is for you to spend %f\n\n", e);
				printf("\n Thank you %s we can now tabulate, \n\n", name);
				printf("Please enter amount for insuarance\n");
					scanf("%f",&i);
					z = (e-i);
					printf("\n balance = %f\n", z);
					printf("\nPlease enter amount for school fees:\n");
					scanf("%f", &s);
					z1 = (z-s);
					printf("\n balance = %f\n",z1);
					printf("\nplease enter your electricity and water bill total\n:");
					scanf("%f",&b);
					z2 = (z1-b);
							printf("\nYour balance is %f\n",z2);
					printf("\nPlease input your shopping total:\n");
					scanf("%f",&n);
					z3 = (z2-n);
							printf("\n balance is %f\n",z3);
							printf("\nPlease enter you post pay and internet:\n");
							scanf("%f",&p);
							z4 = (z3-p);
						printf("\nYour balance is %f\n",z4);
						/*while (z4 <= -1)
						{
							z5 = (z4 - g) + d;
							printf("We are deducting from the amount for debts:");
							z4 + d;
						}*/
						if ( z4 <= -1) {
							z4 + d;
							printf("\nWe've added the amount meant to pay debts to your expensess:\n");
							printf("\nYour new balance is:%f\n", z4+d);				
						}
						printf("\nPlease enter the cost of cooking gas:\n");
						scanf("%f",&g);
						if ( (z4 <= -1) {
							z5 = ((z4+d) - g)
						}
						else
						{
							z5 = z4 - g;
							printf("\nYour balance is %f\n",z5);
						}
						
						if (z5 <= -1 && z5 == ((z4+d) -g))
						{
							printf("\nWe've added the amount meant to pay yourself to your expensess:\n");
							printf("\nYour new balance is:%f\n", z5+o);
							//printf("\nWe've added the amount meant to pay debts to your expensess:\n");
							//printf("\nYour new balance is:%f\n", z5+d);
						}
						else if (z5 >=1 && z5 == (z4 - g))
						{
							printf("\nWe've added the amount meant to pay debts to your expensess:\n");
							printf("\nYour new balance is:%f\n", z5+d);/* code */
						}
						
						//{
						//	printf("\nWe've added the amount meant to pay debts to your expensess:\n");
						//	printf("\nYour new balance is:%f\n", z5+d);
							//printf("\nWe've added the amount meant to pay yourself to your expensess:\n");
							//printf("\nYour new balance is:%f\n", z5+o);
						}
										
						printf("\nPlease enter your fuel cost:\n");
						scanf("%f",&fu);
						if ( z6 <= -1) {
							z6 = (z5+o) - fu;
						}
						else {
							z6 = z5 - fu;
							}
						printf("\nYour balance is: %f\n", z6);
						if (z6 <= -1 && z5 > -1)
						{
							printf("\nWe've added the amount meant to pay yourself to your expensess:\n");
							printf("\nYour new balance is:%f\n", z6+o);
						}
						else
						{
							printf("\nWe've added the amount meant to pay tithe to your expensess:\n");
								printf("\nYour new balance is:%f\n", z6+t);
						}
						printf("Please enter cost of housegirl:\n");
						scanf("%f",&hg);
						if ( z6 <= -1)
						{
							z7 = (z6+t) - hg;
													}
						else
						{
							z7 = z6 - hg;
							 /* code */
						}
						
							if (z7 <= -1)
							{
								printf("\nWe've added the amount meant to pay tithe to your expensess:\n");
								printf("\nYour balance is: %f\n",z7+t);
							}
							/*else
							{
						printf(" Your balance is %f\n", z7);
							}*/
							
							
								return 0;
}
