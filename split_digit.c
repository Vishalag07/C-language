 //code to split digits of three digit number
 #include<stdio.h>
 void main(){
 int n,a,b,c;
    printf("\nEnter Three Digit No : ");
    scanf("%d",&n); //123
    a=n%10;  //3
    n=n/10;  //12
    b=n%10;  //2
    c=n/10;  //1
    printf("\nFirst Digit  : %d",c);
    printf("\nSecond Digit : %d",b);
    printf("\nThird Digit  : %d",a);
}