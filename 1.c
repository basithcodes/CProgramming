#include <stdio.h>
#include <string.h>

static int x;

int main() {
  char a[20] = {'v', 'i', 'v', 'e', 'n'};
  /* char a[20] = "viven"; */
  char *b = "basith";
  printf("%ld\n", sizeof(a));
  printf("%ld", strlen(a));
  printf("hello");
}
