//code to use fgets and puts function
#include<stdio.h>
int main(){
    char fullname[100];
    puts("enter full name");
    fgets(fullname,100,stdin);
    puts(fullname);
    return 0;
}