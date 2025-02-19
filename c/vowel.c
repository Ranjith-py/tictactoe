# include <stdio.h>
int main (){
    char y[20];
    printf("enter the string\?");
    scanf ("%[aeiou]",y);
    printf("the input was:%s\n",y);

    return 0;

}
