#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    //A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400
    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
                printf("%d is leap year",year);
            else
                printf("%d not a leap year",year);
            
        }
        else
        printf("%d leap year",year);

    }
    else
        printf("%d not a leap year",year);
    return 0;
}