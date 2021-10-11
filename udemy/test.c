#include <stdio.h>
int main() {
  unsigned int m[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
  unsigned int n, i;
  scanf("%d", &n); // input n = 3
  for (i = 0; i <= 7; i++) {
    if (n & m[i])
      printf("\nyes");
    else
      printf("\nno");
  }

	
  for (int j = 0; j < 5; j++) {
    printf("%d\n", i);
  }
  return 0;
}
