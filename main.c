#define SDL_MAIN_USE_CALLBACKS 1
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "game.h"
#include "render.h"

#define SCREEN_WIDTH 400
#define SCREEN_HEIGH 600

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;
Game game;

SDL_AppResult SDL_AppInit(void **appstate, int argc, char *argv[]) {
	SDL_SetAppMetadata("2D shoot game.DEV", "0.1", "com.shoot.game");

	if (!SDL_Init(SDL_INIT_VIDEO)) {
		SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
		return SDL_APP_FAILURE;
	}
		
	if (!SDL_CreateWindowAndRenderer("2D shoot game.DEV", SCREEN_WIDTH, SCREEN_HEIGH, SDL_WINDOW_RESIZABLE, &window, &renderer)) {
		SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
		return SDL_APP_FAILURE;
	}

	SDL_SetRenderLogicalPresentation(renderer, SCREEN_WIDTH, SCREEN_HEIGH, SDL_LOGICAL_PRESENTATION_LETTERBOX);

	game_init(&game, SCREEN_WIDTH, SCREEN_HEIGH);

	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppIterate(void *appstate) {
	render(renderer, &game);

	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
	if (event->type == SDL_EVENT_QUIT) {
		return SDL_APP_SUCCESS;
	}
	return SDL_APP_CONTINUE;
}

void SDL_AppQuit(void *appstate, SDL_AppResult result) {

}
