/* This program will find whether a given number is palindrome or not */

/* Functions with return type and no arguments */

#include <stdio.h>

int isItPalindrome(void);

int main(void) {
	int yesOrNo;
	yesOrNo = isItPalindrome();
	if (yesOrNo)
		printf("It's a palindrome\n");
	else 
		printf("It's not a palindrome\n");
	
	return 0;
}

int isItPalindrome(void) {
	printf("\t\tPalindrome:\n");
	int number, remainder, newNumber = 0, temp;
	printf("Enter a number: ");
	scanf("%d", &number);

	temp = number;

	while (temp != 0) {
		remainder = temp % 10;
		temp = temp / 10;
		newNumber = newNumber * 10 + remainder;
	}

	if (number == newNumber)
		return 1;
	else
		return 0;
}
