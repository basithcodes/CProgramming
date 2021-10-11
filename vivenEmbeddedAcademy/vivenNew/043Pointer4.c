#include <stdio.h>

int main(void)
{
	int i, a = 0, b = 1, c;
	int *pval1, *pval2, *pval;

	pval1 = &a;
	pval2 = &b;
	pval = &c;

	for (i = 0; i < 6; i++) {
		*pval = *pval1 + *pval2;
		*pval1 = *pval2;
		*pval2 = *pval;
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}
