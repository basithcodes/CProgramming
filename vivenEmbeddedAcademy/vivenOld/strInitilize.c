/* 
 * What's the output of this program and why?
 * */
#include <stdio.h>
#include <string.h>

int main() {
	char *str = "Raju";
	strcpy(str, "Ramesh");
	printf("%s\n", str);
	return 0;
}
