//code to search element in array
#include<stdio.h>
void main(){
    int i,n,arr[100]={66,44,22,77,45,72,43,64,99,74};
    printf("enter element :");
    scanf("%d",&n);
    for(i=0;i<100;i++){
        if(arr[i]==n){
            printf("Element %d is found",arr[i]);
            break;
        }
    }
    if(i==100){
        printf("element %d not found",n);
    }
}