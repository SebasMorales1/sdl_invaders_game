#include "game.h"
#include <SDL3/SDL_stdinc.h>

void game_init(Game *game, uint16_t sc_width, uint16_t sc_height) {
	game->sc_width = sc_width;
	game->sc_height = sc_height;
	game->startup_kinematic = true;

	ColorRGB player_color = { 0, 200, 0 };
	game->player = create_entity(
								30,
								50,
								30,
								30,
								100,
								0.5,
								player_color
								);

	ColorRGB star_color = { 255, 255, 255 };
	for (uint8_t i=0; i<NUM_OF_STARS; i++) {
		game->stars[i] = create_entity(
								SDL_rand(sc_width)+1,
								SDL_rand(sc_height)+1,
								5,
								5,
								0,
								0,
								star_color
								);
	}
}
