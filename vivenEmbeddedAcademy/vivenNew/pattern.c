#include "pattern.h"
void pattern1(void) {
	printf("pattern1\n");
	int i,j;
	for (i = 1; i <= 5; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("*");
		}
	}
	printf("\n");
}

void pattern2(void) {
	printf("pattern2\n");
	int i,j,max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max - i + 1; ++j) {
			printf("*");
		}
	}
	printf("\n");
}

void pattern3(void) {
	printf("pattern3\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d", i);
		}
	}
	printf("\n");
}

void pattern4(void) {
	printf("pattern4\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max + 1 - i; ++j) {
			printf("%d", i);
		}
	}
	printf("\n");

}

void pattern5(void) {
	printf("pattern5\n");
	int i, j, max = 5;
	for (i = 1; i < max; ++i, printf("\n")) {
		for (j = 1; j <= max; ++j) {
			printf(" ");
		}
	}
	printf("\n");
}

void pattern6(void) {
	printf("pattern6\n");
	int i, j, max;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d", j);
		}
	}
	printf("\n");
}

void pattern7(void) {
	printf("pattern7\n");
	int i, j, max;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d", j+i);
		}
	}
	printf("\n");
}

void pattern8(void) {
	printf("pattern8\n");
	int i, j, max;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d", j%2 == 0?(0):(1));
		}
	}
	printf("\n");
}

void pattern9(void) {
	printf("pattern9\n");
	int i, j, k = 1, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j, ++k) {
			printf("%d ", k);
		}
	}
	printf("\n");
}

void pattern10(void) {
	printf("pattern10\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d ", max - j + 1);
		}
	}
	printf("\n");
}

void pattern11(void) {
	printf("pattern11\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j) {
			printf("%d ", max - i + 1);
		}
	}
	printf("\n");
}

void pattern12(void) {
	printf("pattern12\n");
	int i, j, k = 1, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i; ++j, ++k) {
			printf("%d ", max - i + 1);
		}
	}
	printf("\n");
}

void pattern13(void) {
	printf("pattern13\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max - i + 1; ++j) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void pattern14(void) {
	printf("pattern14\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max - i + 1; ++j) {
			printf("%d ", j);
		}
	}
	printf("\n");
}

void pattern15(void) {
	printf("pattern15\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max - i + 1; ++j) {
			printf("%d ", max - i + 1);
		}
	}
	printf("\n");
}

void pattern16(void) {
	printf("pattern16\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= max - i + 1; ++j) {
			printf("%d ", max - j + 1);
		}
	}
	printf("\n");
}

void pattern17(void) {
	printf("pattern17\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("* ");
		}
	}
	printf("\n");
}

void pattern18(void) {
	printf("pattern18\n");
	int i, j, max = 5;
	for (i = 1; i <= max ; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%d ", j);
		}
	}
	printf("\n");
}

void pattern19(void) {
	printf("pattern19\n");
	int i, j, max = 5;
	for (i = 1; i <= max ; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("*");
		}
	}
	printf("\n");
}

void pattern20(void) {
	printf("pattern20\n");
	int i, j, max = 5;
	for (i = 1; i <= max ; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%d", j);
		}
	}
	printf("\n");
}

void pattern21(void) {
	printf("pattern21\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; ++j) {
			printf("*");
		}
	}
	printf("\n");
}

void pattern22(void) {
	printf("pattern22\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; ++j) {
			printf("%d", i);
		}
	}
	printf("\n");
}

void pattern23(void) {
	printf("pattern23\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; ++j) {
			printf("%d", j);
		}
	}
	printf("\n");
}

void pattern24(void) {
	printf("pattern24\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf("  ");
		}
		for (j = 1; j <= 2*i-1; ++j) {
			printf("* ");
		}
	}
	printf("\n");
}

void pattern25(void) {
	printf("pattern25\n");
	int i, j, max = 5;
	char x = 'A';
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1, x = 'A'; j <= i ; ++j, ++x) {
			printf("%c", x);
		}
	}
	printf("\n");
}

void pattern26(void) {
	printf("pattern26\n");
	int i, j, max = 5;
	char x = 'A';
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1, x = 'A'; j <= i; ++j, ++x) {
			printf("%c ", x);
		}
	}
	printf("\n");
}

void pattern27(void) {
	printf("pattern27\n");
	int i, j, max = 5;
	char x = 'A';
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j, ++x) {
			printf("%c", x);
		}
	}
	printf("\n");
}

void pattern28(void) {
	printf("pattern28\n");
	int i, j, max = 5;
	char x = 'A';
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j < max - i + 1 ; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j, ++x) {
			printf("%c ", x);
		}
	}
	printf("\n");
}

void pattern29(void) {
	printf("pattern29\n");
	int i, j, max = 5;
	char x = 'A';
	for (i = 1; i <= max; ++i, ++x, printf("\n")) {
		for (j = 1; j < max - i + 1 ; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%c", x);
		}
	}
	printf("\n");
}

void pattern30(void) {
	printf("pattern30\n");
	int i, j, max = 5;
	for (i = 1; i <= max; ++i, printf("\n")) {
		for (j = 1; j <= i ; ++j) {
			printf("*");
		}
		for (j = 1; j <= max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= max - i + 1; ++j) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("*");
		}
	}
	printf("\n");
}
void allpattern(void) {
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern6();
	pattern7();
	pattern8();
	pattern9();
	pattern10();
	pattern11();
	pattern12();
	pattern13();
	pattern14();
	pattern15();
	pattern16();
	pattern17();
	pattern18();
	pattern19();
	pattern20();
	pattern21();
	pattern22();
	pattern23();
	pattern24();
	pattern25();
	pattern26();
	pattern27();
	pattern28();
	pattern29();
	pattern30();
}
