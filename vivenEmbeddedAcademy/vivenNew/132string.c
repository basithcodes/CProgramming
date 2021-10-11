#include <stdio.h>

int main(void) {
	char *userBuffer;
	userBuffer = "Abdul Basith"; // it will automatically 
															 //include '\0' at end
	puts(userBuffer);

	userBuffer = userBuffer + 6; // pointer is not a constant
	puts(userBuffer);
	return 0;
}
