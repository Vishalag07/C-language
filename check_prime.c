//code to check a number is prime or not
#include<stdio.h>
void main(){
    int n,temp=0;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        temp++;
    }
    if(temp==0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
}

