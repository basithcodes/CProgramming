#include<stdio.h>
void bubblesort(int a[],int n);
int main()
{
	int a[50],i,n;
	printf("enter how many values do u want");
	scanf("%d",&n);

	printf("enter %d elemnets",n);

	for(i=0;i < n; i++)
		scanf("%d",&a[i]);
	printf("\n");

	bubblesort(a,n);

	for(i=0;i < n;i++)
		printf("%d\n",a[i]);
	return 0;
}
void bubblesort(int a[],int n)
{
	printf("Sorting: \n");
	int p,c,t;
	/* The below for loop is determine number of pass needed 
	 * to sort the elements */
	for(p=0; p < n; p++)
	{
		/* Sorting the elements, for loop*/
		for(c=0; c < n-p-1; c++)
		{
			if(a[c]>a[c+1])
			{
				t=a[c];
				a[c]=a[c+1];
				a[c+1]=t;
			}
		}
	}
}
