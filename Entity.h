/* 
 * File:   CEntity.h
 * Author: tehsis
 *
 * Created on 18 de julio de 2010, 00:58
 */

#ifndef CENTITY_H
#define	CENTITY_H

#include <SDL/SDL.h>

enum Type {
    NOT_ANIMABLE = 0,
    ANIMABLE
};

enum Direction {
    UP = 0,
    DOWN,
    LEFT,
    RIGHT,
    TOPRIGHT,
    TOPLEFT,
    DOWNRIGHT,
    DOWNLEFT
};

class CEntity {
    int x;
    int y;
    Type animable;
    SDL_Surface *graphic;
    int tile;

public:
     CEntity(Type a);
     void move(Direction dir);
     void move(int x, int y);
     void onRender();
};


#endif	/* CENTITY_H */

