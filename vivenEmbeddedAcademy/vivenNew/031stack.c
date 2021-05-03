#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int s[MAX],top=-1;
void push();
void pop();
void display();

int main()
{
	int ch;
	while(1)
	{
		printf("\n\n\t\tenter 1 for psuh 2 for pop 3 for display 4 for exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(1);
		} //switch
	} //while
	return 0;
}//main

void push()
{
	int x;
	printf("\n\n\t\tenter value for x");
	scanf("%d",&x);
	if(top==MAX-1)
	{
		printf("\n\n\t\tstack is full");
		return;
	}
	top++;
	s[top]=x;
	printf("\n\n\t\t%d is inserted into stack", x);
}

void pop()
{
	int x;
	if(top==-1)
	{
		printf("\n\n\t\tstack is empty");
		return;
	}
	x=s[top];
	top--;
	printf("\n\n\t\t%d is deleted from stack", x);
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("\n\n\t\tstack is empty");
		return;
	}
	for(i=0;i<=top;i++)
	{
		printf("\n\n\t\t%d",s[i]);
	}
}
