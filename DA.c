//code to add dearness allowance
#include<stdio.h>
void main(){
    int n,d,a;
    printf("enter basic pay :");
    scanf("%d",&n);
    if(n<=5000){
        d=0.12*n;
        printf("Dearness Allowance is %d",d);
    }
    else{
        a=0.15*n;
        printf("Dearness Allowance is %d",a);
    }
}