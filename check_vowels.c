//code to count the number of vowels,consonants and digits in a string 

#include <stdio.h> 

// Function to count number of vowels,consonant and digits 
void count(char str[])
{ 
	// Declare the variable vowels,consonant and digits 
	int vowels = 0, consonants = 0,digits=0; 

	int i; 
	char ch; 

	// Take each character from this string to check 
	for (i = 0; str[i] != '\0'; i++) { 

		ch = str[i]; 

		// If this character is a vowel,increment the count of vowels 
		if (ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U') 
			vowels++; 

		// If this character is a space skip it 
		else if (ch == ' ') 
		continue; 

		else if ((str[i] >= 'a' && str[i] <= 'z')||(str[i]>='A'&&str[i]<='Z'))
        consonants++;

		else if (str[i] >= '0' && str[i] <= '9')
        digits++;
    }

	// Print the total count of vowels,consonants and digits 
	printf("\nVowels: %d", vowels); 
	printf("\nConsonants: %d", consonants);
	printf("\ndigits: %d", digits); 
} 

int main() 
{ 
	char str[] = "ABCDEfghijklmnopqrstuvwxyz12345"; 
	printf("String: %s", str); 

	count(str); 

	return 0;
} 