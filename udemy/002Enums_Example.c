#include <stdio.h>

int main() {
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	enum Company cmp1, cmp2, cmp3;
	cmp1 = XEROX;
	cmp2 = GOOGLE;
	cmp3 = EBAY;
	printf("%i %i %i\n", cmp1, cmp2, cmp3);
	return 0;
}

