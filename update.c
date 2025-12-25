#include "update.h"

void update(Game *game) {
	// move stars
	for (int i=0; i<NUM_OF_STARS; i++) {
		game->stars[i].transform.y +=1;

		if (game->stars[i].transform.y > game->sc_height)
			game->stars[i].transform.y = -1;
	}
}
