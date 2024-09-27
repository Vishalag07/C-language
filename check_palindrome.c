//code to check palindrome number
#include<stdio.h>
void main(){
    int n,r,s=0,t;
    printf("enter number :");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t)
    printf("palindrome number");
    else
    printf("not a palindrome number");
}