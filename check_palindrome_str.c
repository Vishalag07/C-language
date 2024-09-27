//code to check if a given string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "RADAR";
	int l = 0;
	int h = strlen(str) - 1;

	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}

	printf("%s is palindrome\n", str);

	return 0;
}
