#include<stdio.h>
int main()
{
enum{
    jan, feb, march, april, may, june, july,
    august, september, october, november, december
};
printf("%d feb\n", feb);
printf("%d october\n", october);
enum tag{
    name1,
    name2 = 10,
    name3,
    name4
};
printf("name1: %d\n", name1);
printf("name4: %d\n", name4);
return 0;
}