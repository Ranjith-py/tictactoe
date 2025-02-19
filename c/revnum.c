# include<stdio.h>
int main(){
    int rev=0 ,right_digit;
    int number;
    printf("enter the number to be reversed:");
    scanf("%d",&number);
    while ( number != 0 ) 
    {
        right_digit = number % 10;
        rev=rev*10 + right_digit;
        number = number / 10;
    }
    printf("the reversed number is is %d",rev);
  return 0;
}
