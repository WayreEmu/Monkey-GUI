#include <SDL.h>
#include "MonkeyGui.h"
constexpr int width = 800;
constexpr int height = 600;

int main(int argc, char *argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = SDL_CreateWindow("Monkey Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	MonkeyGui::init(renderer);
	MonkeyGui *rect1 = new MonkeyGui(0, 0, 200, 200);
	

	SDL_Event event;
	bool quit = false;

	while (!quit) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				quit = true;
			case SDL_MOUSEBUTTONDOWN:
				break;
			}
		}

		SDL_SetRenderDrawColor(renderer, 0, 150, 0, 0);
		SDL_RenderClear(renderer);

		rect1->drawAll();

		SDL_RenderPresent(renderer);
	}

	return 0;
}