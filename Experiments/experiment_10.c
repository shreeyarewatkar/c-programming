#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("enter 2 numbers to perform operation");
    scanf("%d %d",&a,&b);
    printf("enter operator = ");
    scanf(" %c",&c);
    switch(c){
        case '+':
        printf("SUM = %d",a+b);
        break;
        case '-':
        printf("DIFFERENCE = %d",a-b);
        break;
        case '*':
        printf("MULTIPLY = %d",a*b);
        break;
        case '/':
        printf("DIVISION = %d",a/b);
        break;
        case '%':
        printf("REMAINDER = %d",a%b);
        break;
        default :
        printf("Enter Valid Operator");
    }
    return 0;
}