#include <stdio.h>
#include <string.h>

int main(void) {
	char s[] = "Rendezvous!";
	printf("\n%d %ld\n", *(s+strlen(s)), strlen(s));
	return 0;
}
