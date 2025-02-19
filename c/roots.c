#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double dis,r1,r2,real,imaginary;
    printf ("enter the coefficients a, b, c:");
    scanf("%lf %lf %lf ",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0){
        //real and different
        r1=(-b+sqrt(dis))/2*a;
        r2=(-b-sqrt(dis))/2*a;
        printf("Roots are real and different :\n");
        printf("r1=%.2lf\n",r1);
        printf("r2=%.2lf\n",r2);
    }
    else if (dis==0){
        //real and same
        r1 = -b / (2*a);
        printf("Roots are real and the same:\n");
        printf("r1 = r2 = %.2lf\n", r1);
    }
    else {
        // Roots are complex and different
        real = -b / (2*a);
        imaginary = sqrt(-dis) / (2*a);
        printf("Roots are complex and different:\n");
        printf("r1 = %.2lf + %.2lfi\n", real, imaginary);
        printf("r2 = %.2lf - %.2lfi\n", real, imaginary);
    }

    return 0;
}
