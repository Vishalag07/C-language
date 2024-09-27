//code to take input until multiple of 7 is found
#include<stdio.h>
void main(){
    int n,i;
    for(i=1;;i++){
        printf("enter number :");
        scanf("%d",&n);
        if(n%7==0){
        printf("number is multiple of 7");
        break;
        }
    }
}