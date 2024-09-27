//code to print number of odd elements in 2D array
#include<stdio.h>
int main(){
    int count=0,k,m,n;
    printf("enter size of rows :");
    scanf("%d",&m);
    printf("enter size of columns :");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("enter element [%d,%d]:",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("element [%d,%d]:%d\n",i,j,arr[i][j]);
        if(arr[i][j]%2!=0)
            count++;
        }
    }
    printf("\n%d odd elements",count);
    return 0;
}