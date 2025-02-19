#include <stdio.h>
int main ( )
 {
float value1, value2,result;
char operator;
printf("Type in your expression.\n");
scanf("%f %c %f", &value1,&operator,&value2);
if ( operator == '+' )
	{result=value1+value2;
	printf("%f",result);}
else if ( operator == '-' )
	{result=value1-value2;
	printf("%f",result);}
else if ( operator == '*' )
	{result=value1*value2;
	printf("%f",result);}
else if ( operator == '/' )
	{result=value1/value2;
	printf("%f",result);}
else 
	printf("Unknown operator.\n");
return 0; 
}
