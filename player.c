#include "player.h"

void draw_player(SDL_Renderer *renderer, SDL_FRect *rect) {
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderFillRect(renderer, rect);
}
