#include<stdio.h>
int main(){
    printf("Enter your marks \n\n");
    float m,d,c,w,n,cdc,cp,t,p;
    printf("Maths : ");
    scanf("%f",&m);
    printf("Digital Logic : ");
    scanf("%f",&d);
    printf("C Programming : ");
    scanf("%f",&c);
    printf("Web Tech : ");
    scanf("%f",&w);
    printf("NALS : ");
    scanf("%f",&n);
    printf("CDC : ");
    scanf("%f",&cdc);
    printf("CP : ");
    scanf("%f",&cp);
    printf("\n");
    t=m+d+c+w+n+cdc+cp;
    printf("Total Marks : %f\n",t);
    p=(t/700)*100;
    printf("Percentage : %f\n",p);
    if(p>=91){
        printf("Your Grade is A\n");
    }else if(p>=81){
        printf("Your Grade is B\n");
    }else if(p>=71){
        printf("Your Grade is C\n");
    }else if(p>=61){
        printf("Your Grade is D\n");
    }else if(p>=33){
        printf("Your Grade is E\n");
    }else{
        printf("You Failed The Examination\n");
    }
    return 0;

}