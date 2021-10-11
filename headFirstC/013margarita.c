#include <stdio.h>

typedef union {
	float lemon;
	int lemon_pieces;
} lemon_lime;

typedef struct {
	float tequila;
	float cointreau;
	lemon_lime citrus;
} margarita;

int main() {
	margarita m = {2.0, 1.0, {2}};
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", 
			m.tequila, m.cointreau, m.citrus.lemon);
}
