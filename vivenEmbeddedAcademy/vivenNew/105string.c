#include <stdio.h>

int main(void) {
	char s;
	printf("Enter a character: ");
	// It will store the data in the buffer and will display the first 
	// character from buffer area, because %c format specifier will 
	// take only one character from buffer area.
	// scanf("%c", &s);
	// printf("%c\n", s); 

	// It will get the data until enter character is entered.
	// If user press enter key then it will display 10 
	s = getchar();
	printf("%c %d\n", s, s); 
	
	return 0;
}
