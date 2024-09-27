// code to print left half pyramid pattern of star 
#include <stdio.h> 
int main() 
{ 
	int rows = 5; 

	// first loop is for printing the rows 
	for (int i = 0; i < rows; i++) { 

		// loop for printing leading whitespaces 
		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// loop for printing * character 
		for (int k = 0; k <= i; k++) { 
			printf("%d ",k+1); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
