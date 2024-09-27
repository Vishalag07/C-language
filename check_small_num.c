//code to check smallest of two number
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    if(a<b){
        printf("%d is smallest",a);
    }
    else
    printf("%d is smallest",b);
    return 0;
}