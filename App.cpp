#include "App.h"

App::App()
{
    screen = NULL;
    Running = true;
}

int App::exec() {
    if(init() == false) {
            return -1;
        }

    SDL_Event e;

    while(Running) {
        while(SDL_PollEvent(&e)) {
            EventHandler::catchEvent(&e);
        }
        loop();

        draw();

    }

    exit();



    return 0;
}
