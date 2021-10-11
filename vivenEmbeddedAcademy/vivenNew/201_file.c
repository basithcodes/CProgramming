/* WAP to accept a file and replace lower case charcter to upper case
 * and upper case characters to lower case. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp;
  char filename[20];
  char ch;

  printf("Enter file name: ");
  fgets(filename, 20, stdin);
  filename[strcspn(filename, "\n")] = 0;

  fp = fopen(filename, "r+");

  if (fp == NULL) {
    printf("FIle not found\n");
    exit(1);
  }

  while (1) {
    ch = fgetc(fp);
    if (ch >= 'A' && ch <= 'Z') {
      fseek(fp, -1, SEEK_CUR);
      fprintf(fp, "%c", ch + 32);
    } else if (ch >= 'a' && ch <= 'z') {
      fseek(fp, -1, SEEK_CUR);
      fprintf(fp, "%c", ch - 32);
    } else if (ch == EOF) {
      break;
    }
  }
  fclose(fp);
  return 0;
}
