//code to check pass or fail according to marks
#include<stdio.h>
void main(){
    int n;
    printf("enter marks :");
    scanf("%d",&n);
    if(n>=30&&n<=100)
    printf("PASS");
    else if(n<30&&n>=0)
    printf("FAIL");
    else
    printf("invalid marks");
}