//code to print factorial of a number
#include<stdio.h>
void main(){
    int n,i,f=1;
    printf("enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("factorial is %d",f);
}