//code to print perimeter of a rectangle
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter length :");
    scanf("%d",&a);
    printf("enter breadth :");
    scanf("%d",&b);
    c=2*(a+b);
    printf("perimeter of a rectangle is %d",c);
    return 0;
}