#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers to be compared : ");
    scanf("%d %d %d",a,b,c);
    if(a>b){
        if(a>c){
            printf("%d is greater than %d and %d",a,b,c);
        }
        else if(a<c){
            printf("% is greater than %d but smaller than %d",a,b,c);
        }
    }
    
}