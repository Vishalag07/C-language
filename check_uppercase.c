//code to check a character is uppercase or not
#include<stdio.h>
void main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("character is UPPERCASE");
    else
    printf("character is not uppercase");
}