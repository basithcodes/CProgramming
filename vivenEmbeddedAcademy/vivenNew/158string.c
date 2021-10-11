/* WAP to accept a string This is a data and its output should be */
/* This */
/* is  */
/* a  */
/* data */ 

#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_CHARS 512

int main(void) {
	char *data;
	int i = 0;
	unsigned int memorySize;
	memorySize = NUM_OF_CHARS*sizeof(char);
	data = (char *)malloc(memorySize);
	printf("Memory Size = %d\n\n", memorySize);
	printf("Enter the data: ");
	fgets(data, memorySize, stdin);
	while(*(data+i) != '\0') {
		if (*(data+i) == 32) {
			printf("\n");
		} else {
			printf("%c", *(data+i));
		}
		i++;
	}

	return 0;
}
