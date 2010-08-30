#include "App.h"
#include <iostream>
using namespace std;

bool CApp::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if ((screen = SDL_SetVideoMode(WIDTH,HEIGHT,BPP,SDL_HWSURFACE|SDL_DOUBLEBUF))
            == NULL) {
      return false;
    }


     if(!(stage.load("maps/stage.map"))) {
	 return false; 
     }

     if(!(stage.loadTileSet("images/tiles.png"))) {
	 return false;
     }

    return true;

}
