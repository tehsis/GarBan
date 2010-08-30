#include "App.h"

void CApp::exit() {
    Running = false;
    SDL_FreeSurface(screen);
    stage.free();
    SDL_Quit();
}
