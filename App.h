/* 
 * File:   CApp.h
 * Author: tehsis
 *
 * 
 */

#ifndef CAPP_H
#define	CAPP_H

#include <SDL/SDL.h>
#include "Tile.h"
#include "Surfaces.h"
#include "defines.h"
#include "Map.h"

class CApp {

    bool Running;
    SDL_Surface* screen;
    SDL_Surface* test;
    Map stage;

public:
    CApp();
    int exec();
    void exit();
    void loop();
    void draw();
    void event(SDL_Event* event);
    bool init();
};


#endif	/* CAPP_H */

