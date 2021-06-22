#include <stdio.h>

int main(void)
{
	int i = 10, *j, **k;
	printf("%d\n", i);
	printf("%d\n", &i);
	printf("%d\n", *(&i));

	j = &i;

	printf("%d\n", &j);
	printf("%d\n", j);
	printf("%d\n", *&j);


	k = &j;

	printf("%d %d %d %d\n", k, &k, *k, *&k);
	printf("%d %d %d %d %d %d\n", i, *&i, *j, **&j, **k, ***&k);

	return 0;
}
