#include "App.h"

CApp::CApp()
{
    screen = NULL;
    Running = true;
}

int CApp::exec() {
    if(init() == false) {
            return -1;
        }

    SDL_Event e;

    while(Running) {
        while(SDL_PollEvent(&e)) {
            event(&e);
        }
        loop();

        draw();

    }



    return 0;
}
