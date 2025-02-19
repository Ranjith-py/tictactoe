#include<stdio.h>
int main ()
{
int number;
printf("Type in your number: ");
scanf("%d",&number);
if ( number < 0 )
	number = -number;
printf("The absolute value is\n");
printf("%d",number);
return 0;
}
