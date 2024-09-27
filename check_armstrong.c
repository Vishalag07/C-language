//code to check a number is armstrong number or not
#include<stdio.h>
#include<math.h>
void main(){
    int n,no,s=0,i=0,r;
    printf("enter number :");
    scanf("%d",&n);
    no=n;
    while(no!=0){
        no=no/10;
        i++;
    }
    no=n;
    while(no!=0){
        r=no%10;
        s=s+pow(r,i);
        no=no/10;
    }
    if(n==s)
    printf("ARMSTRONG number");
    else
    printf("not an ARMSTRONG number");
}

