//code to check a year is leap year or not
#include<stdio.h>
void main(){
    int n;
    printf("enter year :");
    scanf("%d",&n);
    if(n%400==0)
    printf("%d is a leap year",n);
    else if(n%100==0)
    printf("%d is not a leap year",n);
    else if(n%4==0)
    printf("%d is leap year",n);
    else
    printf("%d is not a leap year",n);
}