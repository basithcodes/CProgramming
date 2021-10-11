/* WAP to accept a file, find out number of words, spaces, tabs, 
 * alphabets, digits and display them */

#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char filename[20];

	printf("Enter name of the file: ");
	fgets(filename, 20, stdin);

	return 0;

}
