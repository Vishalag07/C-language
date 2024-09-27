//code to add gst in array of prices
#include<stdio.h>
void main(){
    float price[3];
    printf("enter 3 prices\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("total price 1 is %.2f\n",price[0]+(0.18*price[0]));
    printf("total price 2 is %.2f\n",price[1]+(0.18*price[1]));
    printf("total price 3 is %.2f\n",price[2]+(0.18*price[2]));
}