//code to print diagonal elements of a matrice
#include<stdio.h>
void main(){
    int r,c,a[10][10];
    printf("enter rows :");
    scanf("%d",&r);
    printf("enter columns :");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        printf("enter matrice 1 element %d,%d :",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\nelements of matrice 1\n\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
    printf("%d  ",a[i][j]);
    if(j==c-1)
    printf("\n\n");
    }
    printf("diagonal elements\n\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
    if(i==j)
    printf("%d\t",a[i][j]);
    }
}