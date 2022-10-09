#include <stdio.h>
int main(void)
{
	int repeat = 0;
	printf("iHow strong is your love Winnie 1 - 10?:");
	scanf("%d", &repeat);
	printf("\nI love you very");
	while(repeat > 0)
	{
		printf("\n very");
		repeat --;
	};
	printf("much.\n\n");
	return 0;
};
