#ifndef ENTITY_H
#define ENTITY

#include "SDL3/SDL_rect.h"
#include "SDL3/SDL_render.h"

struct ColorRGB {
	uint8_t r;
	uint8_t g;
	uint8_t b;
};

typedef struct {
	SDL_FRect rect;
	struct ColorRGB color;
} Entity;

Entity create_entity(SDL_FRect rect, struct ColorRGB color);

void render_entity(SDL_Renderer *renderer, Entity *entity);

#endif
