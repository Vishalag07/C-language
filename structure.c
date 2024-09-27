#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=12;
    strcpy(s1.name,"vishal");
    s1.cgpa=9.8;
    printf("%d is roll number\n",s1.roll);
    printf("%s is name\n",s1.name);
    printf("%f is cgpa\n" ,s1.cgpa);
    return 0;
}