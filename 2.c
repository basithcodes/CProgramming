//2.c
extern int i;
extern int p;
extern void hello(int i);
int fun() {
	hello(9);
	return i+p;
}
