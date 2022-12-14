#pragma once
#include <SDL.h>
#include "Color.h"

class MonkeyGui
{
public:
	MonkeyGui(int x, int y, int width, int height);
	~MonkeyGui();
	static void init(SDL_Renderer *renderer);
	void drawAll();
	
	int x;
	int y;
	int width;
	int height;

	Color* colorA;
	Color* colorB;

private:
	SDL_Rect* topbar;
	SDL_Rect* middle;

	int tw;
	int th;
	int mw;
	int mh;

	static inline SDL_Renderer* _renderer;
};

