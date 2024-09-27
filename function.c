//code to create user defined function
#include<stdio.h>
float squareArea(float s);
float circleArea(float rad);
float rectangleArea(float a,float b);
int main(){
    float s=10,rad=20,a=2,b=3;
    printf("area is %f\n",circleArea(s));
    printf("area is %f\n",squareArea(rad));
    printf("area is %f\n",rectangleArea(a,b));
    return 0;
}
float squareArea(float a){
    return a * a;
}
float circleArea(float b){
    return 3.14*b*b;
}
float rectangleArea(float a,float b){
    return a*b;
}