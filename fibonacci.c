//code to print fibonacci series
#include<stdio.h>
int main(){
    int n,i,t1=0,t2=1,t3;
    printf("enter n to print series :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i>1){
            t3=t1+t2;
            t1=t2;
            t2=t3;
            printf("%d\n",t3);
        }
        if(i==0)
        printf("%d\n",t1);
        if(i==1)
        printf("%d\n",t2);
    }
}