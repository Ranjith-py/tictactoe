#include <stdio.h>
int main (){
    int imarks;
    char cgrade;
    printf("enter the marks:");
    scanf("%d",&imarks);
    if (imarks>=90)
        cgrade='a';
    else if(imarks>=70)
        cgrade='b';
    else if(imarks>=50)
        cgrade = 'c';
    else
        cgrade ='f';
    printf("grade=%c\n",cgrade);
return 0;
}