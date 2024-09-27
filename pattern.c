//code to print right half pyramid
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter no. of rows :");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++){
        for(j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}