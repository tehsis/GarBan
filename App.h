/* 
 * File:   CApp.h
 * Author: tehsis
 *
 * 
 */

#ifndef APP_H
#define	APP_H

#include <SDL/SDL.h>
#include "Tile.h"
#include "Surfaces.h"
#include "defines.h"
#include "Animable.h"
#include "Map.h"
#include "EventHandler.h"
#include "PlayableCharacter.h"

class App : public EventHandler {

    bool Running;
    SDL_Surface* screen;
    SDL_Surface* test;
    Map stage;
    Animable anim;
    PlayableCharacter PC;


public:
    App();
    int exec();
    void exit();
    void loop();
    void draw();
    bool init();
    void eventQuit(){ Running = false;};
    void eventKeyDown(SDLKey sym);

};


#endif	/* APP_H */

