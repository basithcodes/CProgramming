#include <ncurses.h>
#include <stdio.h>

int main(void) {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();

	int s1, s2;
	printw("Enter a character(getch): ");
	s1 = getch();
	s2 = getch();
	printw("\ns1 = %d s2 = %d\n",
			s1, s2);

	refresh();
	getch();
	endwin();
	return 0;
}

