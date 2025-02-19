#include<stdio.h>
int main(){
    int a[10],i,n;
    printf(" enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(i=0;i<n-1;i++){
        scanf("%d\n",&a[i]);
    }
    printf("the elements of array are:\n");
    for(i=n-1;i>=0;i--)
        printf("%d\n",a[i]);
    return 0;
}