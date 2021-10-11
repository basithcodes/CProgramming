#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in) {

	//  <----  hajime!
	int i;
	char *new_str_in = (char*)malloc(strlen(str_in));
	*new_str_in = *str_in;
	for (i = 0; *(str_in+i) != '\0'; i++)
		if (*(new_str_in+i) == ' ')
			(new_str_in++);
	return new_str_in;
}

int main() {
	printf("%s\n", no_space("hello world"));

}
