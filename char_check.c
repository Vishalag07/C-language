//code to check a character
#include<stdio.h>
void main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("%c is capital letter",ch);
    else if(ch>='a'&&ch<='z')
    printf("%c is small letter",ch);
    else if(ch>='0'&&ch<='9')
    printf("%c is digit",ch);
    else
    printf("%c is symbol",ch);
}