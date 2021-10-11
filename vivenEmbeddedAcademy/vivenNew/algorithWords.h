#include <stdio.h>
#include <ncurses.h>

#define begin int main() {\
initscr();\
cbreak();\
noecho();
#define print(a)	 printw(#a);
#define end refresh();\
	getch(); }
#define number int
#define character char 
#define printint(a) printw("%d\n", a);
#define readInt(a) scanf("%d", &a);
#define printChar(a) printw("%c\n", a);

