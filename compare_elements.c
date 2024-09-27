//code to print smallest and largest element in array
#include<stdio.h>
void main(){
    int n,i;
    printf("enter no. of elements in array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter array element %d :",i);
        scanf("%d",&arr[i]);
    }
    int s=arr[0],g=arr[0];
    for(i=0;i<n;i++){
        if(g<arr[i]){
            g=arr[i];
        }
        if(s>arr[i]){
            s=arr[i];
        }
    }
    printf("%d is largest element\n",g);
    printf("%d is smallest element\n",s);
}