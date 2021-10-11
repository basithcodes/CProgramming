/* WAP to print the ascii character on the screen */
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int main(void) {
	initscr();
	raw();
	/* keypad(stdscr, TRUE); */
	noecho();

	int ch1, ch2;
	int x, y;

	ch1 = getch();
	while (ch1 != '0') {
		ch1 = getch();
		clear();
		printw("%d", ch1);
		refresh();
	}

	refresh();
	printw("\nProcess Terminated\n");
	getch();
	endwin();
	return 0;
}
