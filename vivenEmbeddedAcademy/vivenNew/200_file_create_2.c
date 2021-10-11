#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp;

  int eno;
  char ename[20];
  float sal;

	// a+b --> append + binary
  fp = fopen("/home/basith/Documents/temp.txt", "a+b");

  if (fp == NULL) {
    printf("Unable to open file.\n");
    exit(1);
  }

  printf("Enter eno: ");
  scanf("%d", &eno);
  __fpurge(stdin);

  printf("Enter ename: ");
  fgets(ename, 20, stdin);

  ename[strcspn("ename", "\n")] = 0;

  printf("Enter salary: ");
  scanf("%f", &sal);

  fprintf(fp, "%d %s %.2f", eno, ename, sal);
  printf("1 record save\n");
  fclose(fp);

  return 0;
}
