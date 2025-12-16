#include "entity.h"

Entity create_entity(int x, int y, int w, int h, uint16_t health, float dps, struct ColorRGB color) {
	SDL_FRect transform = { x, y, w, h };
	Entity entity = { transform, color, health, dps };
	return entity;
}

void render_entity(SDL_Renderer *renderer, Entity *entity) {
	SDL_SetRenderDrawColor(renderer, entity->color.r, entity->color.g, entity->color.b, SDL_ALPHA_OPAQUE);
	SDL_RenderFillRect(renderer, &entity->transform);
}
