#include "App.h"

void App::draw() {

   stage.draw(screen);

   PC.draw(screen);


    SDL_Flip(screen);

}
