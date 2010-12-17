/* 
 * File:   CTile.h
 * Author: tehsis
 *
 * Created on 23 de julio de 2010, 05:52
 */

#ifndef CTILE_H
#define	CTILE_H

#include <SDL/SDL_image.h>

enum TILE_TYPE{
    TYPE_GROUND = 0, // The characters can walk on it.
    TYPE_BLOCK // Characters can't walk on it.
};
class Tile {
  public:
    int id;
    int type;


  public:
    Tile();
};
#endif	/* CTILE_H */

