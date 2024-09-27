//code to print reverse table of a number
#include<stdio.h>
void main(){
    int n,i;
    printf("enter number :");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        printf("%d\n",(n*i));
    }
}