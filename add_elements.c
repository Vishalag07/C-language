//code to add elements of array
#include<stdio.h>
void main(){
    int i,sum=0,arr[100]={1,2,3,88,45,24,64,67,44,5};
    for(i=0;i<100;i++){
        sum=sum+arr[i];
    }
    printf("sum of element is %d",sum);
}