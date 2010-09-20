/* 
 * File:   CEntity.h
 * Author: tehsis
 *
 * Created on 18 de julio de 2010, 00:58
 */

#ifndef ENTITY_H
#define	ENTITY_H

#include <SDL/SDL.h>
#include "Surfaces.h"
#include "defines.h"


class Entity {

protected:
    int x;
    int y;
    SDL_Surface *graphic;

public:
     Entity();
     Entity(int X, int Y) : x(X),y(Y) {};
     void move(int xx, int yy);
     void moveX(int X) { x = X;};
     void moveY(int Y) { y = Y;};
     void draw(SDL_Surface *dst,int tile);
     void setGraphic(SDL_Surface *g);
};


#endif	/* ENTITY_H */

