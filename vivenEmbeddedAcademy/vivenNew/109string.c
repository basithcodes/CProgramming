/* Use ncurses for getch() and getche() function
 * When compiling use -lncurses */
#include <stdio.h>
#include <ncurses.h>

int main(void) {
	/* for ncurses, without it getch is not working properly */
	initscr();
	raw();
	keypad(stdscr, TRUE);
	/* if commented, it displays the character entered on screen. 
	 * it will act like getche() */
	noecho();

	int s1;
	int c1;
	// dont use printf for below statement, use printw which is in 
	// ncurses library

	while (s1 != 'q') {
		printw("enter a character: "); 
		s1 = getch();
		switch (s1) {
			case KEY_RIGHT:
				clear();
				printw("Right key is pressed\n");
				printw("'%c", s1);
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'\n", s1, s1);
				break;

			case KEY_LEFT:
				clear();
				printw("Left key is pressed\n");
				printw("'%c'", s1);
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'\n", s1, s1);
				break;

			case KEY_DOWN:
				clear();
				printw("Down key is pressed\n");
				printw("'%c'", s1);
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'\n", s1, s1);
				break;

			case KEY_UP:
				clear();
				printw("Up key is pressed\n");
				printw("'%c'", s1);
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'\n", s1, s1);
				break;

			default:
				clear();
				printw("'%c'", s1);
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'\n", s1, s1);
				break;
		}
	}


	refresh();
	getch();
	endwin();

	return 0;
}
