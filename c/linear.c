#include<stdio.h>
int main(){
    int i,n,search,a[10],found=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched:");
    scanf("%d",&search);
    for (i=0;i<n;i++){
        if (a[i]==search){
            printf("%d is at %d",search,i+1);
            found=1;
            break;
        }
    }
    if(!found){
            printf("%d is not in the array",search);
        }

    
    return 0;

}