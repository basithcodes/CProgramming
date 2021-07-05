void main()
{
	unsigned int a,b;
	unsigned char*ptr;
	ptr=&a;
	a=511;
	b=*ptr;
	printf("\n%d %d %d",a,b,*ptr);
	*ptr=10;
	printf("\n%d %d %d",a,b,*ptr); 
}
