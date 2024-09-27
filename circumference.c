//code to print circumference of a circle
#include <stdio.h>   
int main() {  
float pi=3.14,radius,circumference;  
printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  
circumference = 2 * pi * radius;  
printf("Circumference of the circle: %f\n", circumference);  
return 0;  
}  