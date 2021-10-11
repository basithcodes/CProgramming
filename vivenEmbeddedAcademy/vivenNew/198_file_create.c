/* WAP to delete a file */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void) {
	FILE *fp;
	int ret;
	char filename[20];

	printf("Enter the file name: ");
	fgets(filename, 20, stdin);
	filename[strcspn(filename, "\n")] = 0; // remove \n from the filename

	fp = fopen(filename, "r");

	if (fp == NULL) {
		printf("File not found\n");
		exit(1);
	}

	ret = unlink(filename);

	if (ret == 0) {
		printf("File deleted successfully\n");
	} else {
		printf("Unable to delete the file.\n");
	}
	return 0;
}
