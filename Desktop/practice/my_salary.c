#include <stdio.h>
int main(void)
{
char name[30];
float x, d, t, e, o, f, i, s, b, n,z,z1,z2,z3,z4, z5, z6,z7,p,g,fu,hg;
printf("What is your name?\n");
scanf("%s", name);
printf("How much is your income on average?\n");
scanf("%f",&x);
o = (0.1*x);
printf("You worked hard %s this should go to you Ksh: %f\n\n",name, o);
		d = (0.1*x);
				printf("This is what can go to clear your debts %s Ksh: %f\n\n",name, d);
				
				t = (0.1*x);
				printf("This can go to tithe %f\n\n", t);
				
				e = (0.7*x);
				printf("Now this is for you to spend %f\n\n", e);
				printf("\n Thank you %s we can now tabulate, \n\n", name);
				printf("Please enter amount for insuarance\n");
					scanf("%f",&i);
					z = (e-i);
					printf("\n balance = %f\n", z);
					printf(" Please enter amount for school fees:\n");
					scanf("%f", &s);
					z1 = (z-s);
					printf("\n balance = %f\n",z1);
					printf("please enter your electricity and water bill total\n:");
					scanf("%f",&b);
					z2 = (z1-b);
							printf("Your balance is %f\n",z2);
					printf("Please input your shopping total:\n");
					scanf("%f",&n);
					z3 = (z2-n);
							printf("\n balance is %f\n",z3);
							printf("Please enter you post pay and internet:\n");
							scanf("%f",&p);
							z4 = (z3-p);
						printf("Your balance is %f",z4);
						while (z4 <= -1)
						{
							z5 = (z4 - g) + d;
							printf("We are deducting from the amount for debts:");
							z4 + d;
							
						}
						/*( z4 <= -1) {
							printf("We are deducting from the amount for debts:")
						}*/
						printf("Please enter the cost of cooking gas:\n");
						scanf("%f",&g);
						z5 = (z4 - g);
						printf("Your balance is %f",z5);
						printf("Please enter your fuel cost:\n");
						scanf("%f",&fu);
						z6 = z5 - fu;
						printf("Your balance is: %f\n", z6);
						printf("Please enter cost of housegirl:\n");
						scanf("%f",&hg);
						z7= z6 - hg;
						printf("Your balance is: %f\n",z7);
						/**	if (z4 <= -1) {
							printf("\n Please, you are above your budget, see what you can cut\n");
							}
					
							else {
							printf("\n Great job!\n");
							}	*/
							return 0;
}
