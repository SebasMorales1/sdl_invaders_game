#include "render.h"
#include "entity.h"
#include "game.h"

void render(SDL_Renderer *renderer) {
	SDL_SetRenderDrawColor(renderer, 0,0,20, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
}
