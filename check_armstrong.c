//code to check a number is armstrong number or not
#include<stdio.h>
void main(){
    int n,i,num,s=0,r;
    printf("enter number :");
    scanf("%d",&n);
    num=n;
    for(i=0;num!=0;i++){
        r=num%10;
        s=s+(r*r*r);
        num=num/10;
    }
    if(s==n)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);
}

