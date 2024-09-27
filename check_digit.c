//code to check a character is digit or not
#include<stdio.h>
void main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
    printf("%c is a DIGIT",ch);
    else
    printf("%c is not a DIGIT",ch);
}