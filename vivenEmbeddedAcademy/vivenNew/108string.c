/* It doesnt work some times especially getch */
#include <stdio.h>
#include <caca_conio.h> // reimplementation of conio in linux

int main(void) {
	char s;
	/* printf("  getche: \n"); */
	/* s = caca_conio_getche(); */
	/* printf("%c", s); */
	printf("  getch: \n");
	s = caca_conio_getch();
	printf("%c\n", s);
  caca_conio_getch();
}
