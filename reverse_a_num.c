//code to print reverse of a number
#include<stdio.h>
void main(){ 
int n,a;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n!=0)    
{    
a=n%10;    
printf("%d",a);   
n=n/10;    
}    
}