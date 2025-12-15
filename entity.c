#include "entity.h"

Entity create_entity(SDL_FRect rect, struct ColorRGB color) {
	Entity entity = { rect, color };
	return entity;
}

void render_entity(SDL_Renderer *renderer, Entity *entity) {
	SDL_SetRenderDrawColor(renderer, entity->color.r, entity->color.g, entity->color.b, SDL_ALPHA_OPAQUE);
	SDL_RenderFillRect(renderer, &entity->rect);
}
