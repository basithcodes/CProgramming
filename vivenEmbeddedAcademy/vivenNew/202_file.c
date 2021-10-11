/* WAP to encode and decode the data */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum encodeAndDecode {
	ENCODE,
	DECODE
};

int main(void) {
	FILE *fp;
	char filename[20];
	int code = 0, flag;
	int options;

	printf("Enter file name: ");
	fgets(filename, 20, stdin);
	filename[strcspn(filename, "\n")] = 0;

	fp = fopen(filename, "r+");

	if (fp == NULL) {
		printf("Unable to open file.\n");
		exit(1);
	}

	while (1) {
		printf("Press %d to encode\nPress %d to decode\n", ENCODE, DECODE);
		scanf("%d", &options);

		switch (options) {
			case ENCODE:
				printf("Encoding Information.\n");
				code = 128;
				break;
			case DECODE:
				printf("Decoding Information:\n");
				code = -128;
				break;
		}
	}
	return 0;
}
