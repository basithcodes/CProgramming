#include <stdio.h>

enum tiffins {
	Deadly_idly = 5,
	Dosa = -2,
	Poori,
	Vada
};

int main(void) {
	enum tiffins a = 0;
	switch(a) {
		case Deadly_idly: printf("Deadly Idly -- Rs: 12\n");
		case Dosa: printf("Dosa -- Rs: 15\n");
		case Poori: printf("Poori -- Rs: 20\n");
		case Vada: printf("Vada -- Rs: 20\n");
	}
	return 0;
}
