#include "MonkeyGui.h"

void MonkeyGui::init(SDL_Renderer* renderer) {
	_renderer = renderer;
}

MonkeyGui::MonkeyGui(int x, int y, int width, int height) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;

	this->tw = width;
	this->th = height / 4;
	this->mw = width;
	this->mh = height;

	topbar = new SDL_Rect();
	middle = new SDL_Rect();

	topbar->x = x;
	topbar->y = y;
	middle->x = x;
	middle->y = y + th/3;
	topbar->w = tw;
	topbar->h = th/3;
	middle->w = mw;
	middle->h = mh;

	colorA = new Color(63, 63, 63, 0);
	colorB = new Color(113, 112, 113, 0);
}

void MonkeyGui::drawAll() {
	SDL_SetRenderDrawColor(_renderer, colorA->r, colorA->g, colorA->b, colorA->a);
	SDL_RenderFillRect(_renderer, topbar);
	SDL_SetRenderDrawColor(_renderer, colorB->r, colorB->g, colorB->b, colorB->a);
	SDL_RenderFillRect(_renderer, middle);
}