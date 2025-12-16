#include "player.h"

Entity init_player() {
	struct ColorRGB color = { 0, 255, 0 };
	return create_entity(10, 20, 30, 30, 100, 0.5, color);
}
