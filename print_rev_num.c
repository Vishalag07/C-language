//code to print reverse natural number
#include<stdio.h>
void main(){
    int n,i;
    printf("enter number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
}