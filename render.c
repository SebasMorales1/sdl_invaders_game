#include "render.h"
#include "entity.h"
#include <SDL3/SDL_stdinc.h>

#define NUM_OF_STARS 20

static Entity stars[NUM_OF_STARS];
static struct ColorRGB star_color = { 255, 255, 255 };
static int stars_generated = 0;

static void generate_stars() {
	for (int i=0; i<NUM_OF_STARS; i++) {
		Entity star = create_entity(SDL_rand(400) + 10, SDL_rand(600) + 10, 5, 5, 0, 0, star_color);
		stars[i] = star;
	}
}

static void render_stars(SDL_Renderer *renderer) {
	for (int i=0; i<NUM_OF_STARS; i++) {
		render_entity(renderer, &stars[i]);
	}
}

void render(SDL_Renderer *renderer) {
	if (!stars_generated) {
		generate_stars();
		stars_generated = 1;
	}

	SDL_SetRenderDrawColor(renderer, 0,0,20, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);
	render_stars(renderer);

	SDL_RenderPresent(renderer);
}
