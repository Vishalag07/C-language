//code to print prime numbers in a given range
#include<stdio.h>
int checkprime(int n){
    int j;
    for(j=2;j<=n/2;j++){
        if(n%j==0)
        return 0;
    }
    return 1;
}
int main(){
    int n,i;
    printf("enter range to print prime numbers :");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
       if (checkprime(i))
       printf("%d is a prime number\n",i);
       else
       printf("%d is not a prime number\n",i);
    }
    return 0;
}

