#include <stdio.h>

int main() {

	int A[]={4,14,24,34};
	int B[]={6,16,26,36};
	int C[]={9,19,29,39};

	int *ptr[3];
	int **pptr;
	int i;

	ptr[0]=A;
	ptr[1]=B;
	ptr[2]=C;

	pptr=ptr;

	for(i=1;i<=3;i++)
	{
		*pptr+=i;
		**pptr+=i;
		++pptr;
	}
	--pptr;
	printf("\n%d", **pptr);
	for(i=0;i<3;i++)
		printf("%d", *ptr[i]);

	for(i=0;i<4;i++)
		printf("\n %d %d %d",A[i],B[i],C[i]);
	return 0;
}
