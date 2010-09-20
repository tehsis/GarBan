#include "App.h"

bool App::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if ((screen = SDL_SetVideoMode(WIDTH,HEIGHT,BPP,SDL_HWSURFACE|SDL_DOUBLEBUF))
            == NULL) {
      return false;
    }

    SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);

    test = Surfaces::surfLoad(static_cast<char *>("images/pjsprite.png"));

    PC.setGraphic(test);

    Surfaces::setTransparent(test,0xff,0x00,0x00);

    if( !(stage.load(static_cast<char *>("maps/stage.map"))) ){
    	return false;
    }


     if(!(stage.loadTileSet(static_cast<char *>("images/tiles.png")))) {
	 return false;
     }

    return true;

}
