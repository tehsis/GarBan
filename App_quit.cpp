#include "App.h"

void App::exit() {
    SDL_FreeSurface(screen);
    stage.free();
    SDL_Quit();
}
