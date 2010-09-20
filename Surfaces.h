/* 
 * File:   Surfaces.h
 * Author: tehsis
 *
 * Created on 12 de agosto de 2010, 08:52
 */

#ifndef SURFACES_H
#define	SURFACES_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class Surfaces {
public:
   Surfaces();
   static void setTransparent(SDL_Surface* surf,int r,int g,int b);
   static SDL_Surface* surfLoad(char* file);
   static bool draw(SDL_Surface* src, SDL_Surface *dst);
   static bool draw(SDL_Surface* src,int srcX, int srcY,int srcH, int srcW,
	SDL_Surface *dst,int dstX,int dstY);

};



#endif	/* SURFACES_H */

