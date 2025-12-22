#ifndef ENTITY_H
#define ENTITY_H

#include "SDL3/SDL_rect.h"
#include "SDL3/SDL_render.h"

typedef struct {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} ColorRGB;

typedef struct {
	SDL_FRect transform;
	ColorRGB color;
	uint16_t health;
	float dps;
} Entity;

Entity create_entity(int x, int y, int w, int h, uint16_t health, float dps, ColorRGB color);

void render_entity(SDL_Renderer *renderer, Entity *entity);
#endif
