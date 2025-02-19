#include <stdio.h>
int main()
{
int n, number, triangularNumber, counter;

for ( counter = 1; counter <= 5; counter++ )
{
printf("that triangular number do you want? ");
scanf("%d",&number);
triangularNumber=0;

for ( n = 1; n <= number; n++ )
	triangularNumber = triangularNumber + n;

printf("The %d th triangular number is:%d \n",n,triangularNumber);
}
return 0;
}
