#include <stdio.h>
#include <string.h>
int main()
{
	char name[30];
       char first_response[] ="Good";
       char second_response[] = "Not good";
	printf("Hey, what is your name:\n");
	scanf("\n %s",name);
		printf("Hey,%s, how are you doing today? Good\n Not good\n",name);
		scanf("\n %s%s", first_response, second_response);
if (strcmp(first_response "Good")) {
	printf("Happy to hear %s \n", name);
}
else { 
	printf("\n We are sorry %s, one of our agents will call you shortly",name);
}
return 0;
}
