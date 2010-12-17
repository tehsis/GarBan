/* 
 * File:   CMap.h
 * Author: tehsis
 *
 * Created on 9 de agosto de 2010, 19:38
 */

#ifndef CMAP_H
#define	CMAP_H

#include <SDL/SDL.h>
#include <vector>
#include "Tile.h"
#include "defines.h"
#include "Surfaces.h"

class Map {
    SDL_Surface *tileSet;
    std::vector<Tile> tileList;

public:
    Map();

    bool load(char *file);
    bool draw(SDL_Surface* dst);
    bool loadTileSet(char* file);
    void free();
};


#endif	/* CMAP_H */

