#include <stdio.h>

const int con = 20; // .rodata segment
int s = 20; // initiallized global variable --> .data
int z; // uninitiallized global variable --> .bss
// int z = 0; // initiallized with zero --> global variable --> .bss
int add(int, int); // function declaration

int main() {
	static int x = 10; // .data segment
	// int x = 10;
	int y = 20;
	int res = 0;
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	char *str = "viven\n"; // string created by using character pointer
	printf("Calling add function\n");
	res = add(x,y);
	printf("add function return: %d\n", res);
	printf("main(base address)----, %p\n", main);
	printf("s---, %p\n", &s);
	printf("z---, %p\n", &z);
	printf("con---, %p\n", &con);
	printf("x---, %p\n", &x);
	printf("str---, %p\n", str);
}

int add(int x, int y) {
	printf("add(base address)---, %p\n", add);
	return x+y;
}
