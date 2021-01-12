#include <SDL2/SDL.h>
#include <SDL2/SDL_test_images.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <stdlib.h>

static const int width = 800;
static const int height = 600;

int main(int argc, char **argv) {
	// Initialize the SDL
	SDL_Init(SDL_INIT_VIDEO);

	// Create an SDL window
	SDL_Window *window = SDL_CreateWindow("hello, SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

	SDL_Delay(2000);

	// Release resources
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}

