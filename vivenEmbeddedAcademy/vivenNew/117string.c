#include <stdio.h>
#include <ncurses.h>

int main(void) {
	char ch1 = '_';
	int arrowKey;
	int maxRow, maxColumn;
	int row=0, column=0;
	int row_count= 0, column_count = 0;

	initscr();
	cbreak();
	noecho();

	// put the character on screen before pressing the arrow keys
	mvaddch(row, column, ch1);

	while (row <= maxRow && column <= maxColumn) {
		arrowKey = getch();
		clear();
		getmaxyx(stdscr,maxColumn,maxRow);		/* get the number of rows and columns */
		printw("maxRow = %d maxColumn = %d\n", maxRow, maxColumn);
		refresh();
		getyx(stdscr, column, row);
		printw("arrowKey = %d\n", arrowKey);
		printw("column = %d row = %d\n", column, row);

		if (arrowKey == 67 && column_count <= maxColumn) {
			column_count++; // move right
			mvaddch(row_count, column_count, ch1);
		}

		else if (arrowKey == 66 && row_count <= maxRow) {
			row_count++;// move down
			mvaddch(row_count, column_count, ch1);
		}

		else if (arrowKey == 68 && column_count >= 0) {
			--column_count; // move left
			mvaddch(row_count, column_count, ch1); 
		}

		else if (arrowKey == 65 && row_count >= 0) {
			--row_count; // move up
			mvaddch(row_count, column_count, ch1); 
		}
	}
	getch();
	endwin();
	return 0;
}
