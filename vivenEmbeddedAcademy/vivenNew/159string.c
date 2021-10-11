/* WAP to display the string in reverse order 
 * (modify the original string) and print the result*/
#include <stdio.h>
#define BUFFER_SIZE 100

int main(void) {
	char buffer[BUFFER_SIZE];
	int i, count = 0, j;
	char temp;

	printf("Enter a string: ");
	fgets(buffer, BUFFER_SIZE, stdin);
	
	for (count = 0, i = 0; buffer[i] != '\0'; ++i, ++count);
	printf("Number of characters stored = %d", count);

	/* j = count-1; // used for swapping, see third logic */

	for(i = 0; i < count/2; i++) {
		/* first logic */
		buffer[i] ^= buffer[count-i-1] ^= buffer[i] ^= buffer[count-i-1];

		/* or */

		/* second logic */
		/* temp = buffer[i]; */
		/* buffer[i] = buffer[count-i-1]; */
		/* buffer[count-i-1] = temp; */

		/* or */

		/* third logic */
		/* buffer[i] += buffer[j]; */
		/* buffer[j] = buffer[i] - buffer[j]; */
		/* buffer[i] -= buffer[j]; */
		/* --j; */

	}

	printf("%s\n", buffer);

	return 0;
}
