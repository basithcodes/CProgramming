#include <stdio.h>

int main(void) {
	char *userBuffer0;
	char *userBuffer1;
	userBuffer0 = "Abdul Basith"; // it will automatically 
															 //include '\0' at end
	puts(userBuffer0);

	userBuffer0 = userBuffer0 + 6; // pointer is not a constant
	userBuffer1 = userBuffer0; // userBuffer0 can be placed in 
														 //multiple pointers because its 
														 //not a constant
	puts(userBuffer0);
	puts(userBuffer1);
	return 0;
}
