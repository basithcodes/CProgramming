#include <stdio.h>
#include <stdlib.h>

#define YEARS 3
#define SEMESTERS 2
#define SUBJECTS 5
#define INTERNAL_AND_EXTERNAL_MARKS 2

int main(void) {
	int marks[YEARS][SEMESTERS][SUBJECTS][INTERNAL_AND_EXTERNAL_MARKS];
	int i, j, k, l;
	int subject_sum, semester_sum, year_sum, grandtotal = 0;

	for (i = 0; i < YEARS; ++i) {
		year_sum = 0;
		for (j = 0; j < SEMESTERS; ++j) {
			semester_sum = 0;
			for (k = 0; k < SUBJECTS; ++k) {
				subject_sum = 0;
				for (l = 0; l < INTERNAL_AND_EXTERNAL_MARKS; ++l) {
					printf(" Enter marks for year %d\n semester %d\n subject %d\n internal and external marks.\n\n", 
							i+1, j+1, k+1);
					if (l == 0) {
						printf("Internal Marks: ");
					} else 
						printf("External Marks: ");
					scanf("%d", &marks[i][j][k][l]);
					subject_sum = subject_sum + marks[i][j][k][l];

					/* This is horrible way of clearing use ncurses library to clear screen */
					system("clear"); 
				}
				semester_sum = semester_sum + subject_sum;
			}
			year_sum = year_sum + semester_sum;
		}
		grandtotal = grandtotal+year_sum;
	}
	printf("Grand Total = %d", grandtotal);
	return 0;
}
