#include <stdio.h>
#include <stdlib.h>

void series1(void);
void series2(void);
void series3(void);
void series4(void);
void series5(void);
void series6(void);
void series7(void);
void series8(void);
void series9(void);

int main(int argc, char *argv[]) {
	int option;
	int i = 0;

	char series[][50] = {
		"1. 1+x+x^2/2!+x^3/3!+x^4/4!....\n\n",
		"2. 1+x^2/2!+x^3/3!+x^4/4!..... \n\n",
		"3. x+x^2/2!+x^3/3!+x^4/4!....\n\n",
		"4. x^2/2!+x^3/3!+x^4/4!..... \n\n",
		"5. 1+x^3/3!+x^5/3!+x^7/7!..... \n\n",
		"6. 1-x+x^2/2!-x^3/3!+x^4/4!.... \n\n",
		"7. x-x^2/2!+x^3/3!-x^4/4!.... \n\n",
		"8. x+x^2/2!+x^4/4!+x^6/6!.... \n\n",
		"9. 1-1/2!+1/3!-1/4!.... \n\n"
	};

	do { 
		printf("\n\nIf you want to exit press '0'\n\n");
		while (i < 9) {
			printf("%s", series[i]);
			++i;
		}
		printf("\nSelect which series sum you want to calculate: ");
		scanf("%d", &option);

		switch (option) {
			case 1:
				series1();
				break;
			case 2:
				series2();
				break;
			case 3:
				series3();
				break;
			case 4:
				series4();
				break;
			case 5:
				series5();
				break;
			case 6:
				series6();
				break;
			case 7:
				series7();
				break;
			case 8:
				series8();
				break;
			case 9:
				series9();
				break;
			/* case 'q': */
			/*   exit(0); */
			default:
				printf("hello\n");
		}
	} while (option != 0);

	return 0;
}

void series1(void) {
	int x, power, fact, numberOfTerms, term, k, product;
	float sum;
	printf("Enter a 'x' value for the series 1+x^2/2!+x^3/3!+..... : ");
	scanf("%d", &x);
	printf("how many terms you want to calcuate from the series:");
	scanf("%d", &numberOfTerms);
	
	/* First for loop will go term wise next for loop will do the product 
	 * and factorial calculations */
	for (term = 1, sum = 1, power = 1; term < numberOfTerms; ++term, ++power) {
		for (k = 1, fact = 1, product = 1; k <= power; ++k) {
			product = product * x;
			fact = fact*k; 
		}
		sum = sum + (float)(product)/fact;
	}
	printf("Sum = %f\n", sum);
}

void series2(void) {
		// "2. 1+x^2/2!+x^3/3!+x^4/4!..... \n\n",
	int selectFirstTerm, lastTerm, power, x, factorial, k, product;
	float sum;
	printf("Enter a 'x' value for the series 1+x^2/2!+x^3/3!+..... : ");
	scanf("%d", &x);
	printf("how many terms you want to calcuate from the series:");
	scanf("%d", &lastTerm);
	for (selectFirstTerm = 1, power = 2, sum = 1; selectFirstTerm < lastTerm; ++selectFirstTerm, ++power) {
		for (factorial = 1, k = 1, product = 1; k <= power; ++k) {
			product = product * x;
			factorial = factorial * k;
		}
		sum += (float)product/factorial;
	}
	printf("Sum of the series = %f\n", sum);
}

void series3(void) {
	//"3. x+x^2/2!+x^3/3!+x^4/4!....\n\n",
	

}

void series4(void) {

}

void series5(void) {

}

void series6(void) {

}

void series7(void) {

}

void series8(void) {

}

void series9(void) {

}
