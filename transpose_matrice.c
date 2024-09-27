//code to transpose a matrix
#include<stdio.h>
void main(){
    int r,c,a[10][10],transpose[10][10];
    printf("enter num of rows :");
    scanf("%d",&r);
    printf("enter num of columns :");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        printf("enter element %d,%d :",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("matrice %d*%d\n",r,c);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        printf("%d",a[i][j]);
        if(j==c-1)
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++){
    transpose[i][j]=a[i][j];
    }

    printf("transpose matrice %d*%d\n",r,c);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        printf("%d",transpose[j][i]);
        if(j==r-1)
        printf("\n");
    }
}
