#ifndef GAME_H
#define GAME_H

#include "entity.h"
#include <stdbool.h>

#define NUM_OF_STARS 30
#define MAX_ENEMIES 20

typedef struct {
	Entity player;
	Entity stars[NUM_OF_STARS];
	Entity enemies[MAX_ENEMIES];
	bool startup_kinematic;
	uint16_t sc_width;
	uint16_t sc_height;
} Game;

void game_init(Game *game, uint16_t sc_width, uint16_t sc_height);

#endif
