/* WAP to accept the file, read the contents from the file and display them */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char filename[20];
	char ch;

	printf("Enter the file name: ");
	fgets(filename, 20, stdin);
	filename[strcspn(filename, "\n")] = 0; // remove \n from the filename

	fp = fopen(filename, "r");


	if (fp == NULL) {
		printf("File not found\n");
		exit(1);
	}


	printf("File is present, contents of the file are: \n");

	while (1) {
		ch = fgetc(fp);
		if (ch==EOF) {
			break;
		}
		putchar(ch);
	}

	// Unable to access the member of fp before fgetc is executed.
	/* printf("access memberof io write base: %s\n", fp->_IO_read_base); */

	fclose(fp);

	printf("File is closed\n");
	return 0;
}
