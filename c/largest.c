#include<stdio.h>
int main()
{
	int a, b;
	printf("enter 2 numbers:\n");
	scanf("%d %d",&a,&b);
    if (a>b){
        printf("a is the largest");
    }
    else{
        printf("b is the largest");
    }
    return 0;
}