#include "game.h"

void game_init(Game *game, uint16_t sc_width, uint16_t sc_height) {
	game->sc_width = sc_width;
	game->sc_height = sc_height;
	game->startup_kinematic = true;

	ColorRGB color = { 0, 230, 0 };
	game->player = create_entity(
								30,
								50,
								30,
								30,
								100,
								0.5,
								color
								);

	for (uint8_t i=0; i<NUM_OF_STARS; i++) {
		game->stars[i] = create_entity(
								i+2,
								i+20,
								5,
								5,
								0,
								0,
								color
								);
	}
}
