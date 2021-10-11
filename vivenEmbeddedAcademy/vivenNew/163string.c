/* WAP to accept collection of characters count each character and  
 * display the count */ 

#include <stdio.h>

int main(void) {
	char st[80];
	static int a[256] = {0}, i;

	printf("Enter the string: ");
	fgets(st, 80, stdin);

	printf("st = %s", st);
	for(i = 0; st[i] != '\0'; i++) {
		a[st[i]] += 1; 
	}
	printf("i = %d\n", i);

	printf("Character\t\tCount\n");
	for(i = 0; i < 256; i++) {
		if(a[i] != 0) {
			printf("\n  %c\t\t\t%d", i, a[i]);
		}
	}
	printf("\n");

	return 0;
}

