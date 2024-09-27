//code to print grade according to marks
#include<stdio.h>
void main(){
    int n;
    printf("enter marks :");
    scanf("%d",&n);
    if(n>=90&&n<=100)
    printf("GRADE A+");
    if(n>=70&&n<90)
    printf("GRADE A");
    if(n>=30&&n<70)
    printf("GRADE B");
    else if(n<30&&n>=0)
    printf("GRADE C");
    else
    printf("invalid marks");
}