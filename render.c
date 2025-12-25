#include "render.h"
#include "entity.h"

void render(SDL_Renderer *renderer, Game *game) {
	SDL_SetRenderDrawColor(renderer, 0,0,20, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);

	for(int i=0; i<NUM_OF_STARS; i++) {
		render_entity(renderer, &game->stars[i]);
	}

	SDL_RenderPresent(renderer);
}
