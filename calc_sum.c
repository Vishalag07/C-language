//code to calculate sum upto given number
#include<stdio.h>
void main(){
    int n,i,s=0;
    printf("enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("sum is %d",s);
}