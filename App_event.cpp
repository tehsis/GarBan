#include "App.h"

void CApp::event(SDL_Event* event) {

    if(event->type == SDL_QUIT) {
        exit();
    }

}
