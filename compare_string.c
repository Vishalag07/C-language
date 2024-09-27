//code to compare two strings
#include <stdio.h>

int my_strcmp(char *str1,char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2)
        return (*str1 - *str2);
        str1++;
        str2++;
    }

    return (*str1 - *str2);
}

int main() {
    // Example usage:
    char *string1 = "Hello";
    char *string2 = "World";

    int result = my_strcmp(string1, string2);

    if (result == 0)
    printf("Strings are equal\n");
    else if (result < 0)
    printf("String 1 is less than String 2\n");
    else
    printf("String 1 is greater than String 2\n");

    return 0;
}