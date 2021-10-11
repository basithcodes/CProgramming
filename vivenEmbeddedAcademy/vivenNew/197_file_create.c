#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	char ch;
	char filename[20];

	printf("Enter filename: ");
	fgets(filename, 20, stdin);
	filename[strcspn(filename, "\n")]=0;

	fp = fopen(filename, "w");

	if (fp == NULL) {
		printf("Unable to create file.\n");
		exit(1);
	}

	printf("File is created successfully\n");
	printf("Enter the contents into the file: ");
	while (1) {
		ch = getchar();
		if (ch == EOF) {
			fclose(fp);
			printf("File Saved\n");
			break;
		}
		fputc(ch, fp);
	}
	return 0;
}
