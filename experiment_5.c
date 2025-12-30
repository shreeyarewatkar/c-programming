#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer value : ");
    scanf("%d",&a);
    float b;
    printf("Enter an float value : ");
    scanf("%f",&b);
    char c;
    printf("Enter an character value : ");
    scanf(" %c",&c);
    double d;
    printf("Enter an double value : ");
    scanf("%lf",&d);
    printf("integer = %d\nfloat = %f\ncharacter = %c\ndouble = %lf",a,b,c,d);
    return 0;
}