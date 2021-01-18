#include <stdio.h>
#include <stddef.h>
unsigned long int stringLengthFun(char *source);

int main() {
	char name[10] = "super man";
	printf("name: %s\n", name);
	printf("name length: %ld\n", stringLengthFun(name));

}

unsigned long int stringLengthFun(char *source) {
	unsigned long int i, count = 0;
	for (i = 0; source[i] != '\0'; i++) 
		count++;
	return count;
}
