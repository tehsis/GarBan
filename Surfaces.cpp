#include "Surfaces.h"

Surfaces::Surfaces(){

}

SDL_Surface* Surfaces::surfLoad(char* file) {
     SDL_Surface* tmp = NULL;
     SDL_Surface* final = NULL;

    if( (tmp = IMG_Load(file)) == NULL) {
        return false;
    };


    final = SDL_DisplayFormat(tmp);

    return final;

}

/*
 * This function copies the entire src surface onto dst surface
 */

bool Surfaces::draw(SDL_Surface* src, SDL_Surface *dst) {


    if((src == NULL) || (dst == NULL)) {
	return false;
    }

    SDL_BlitSurface(src,NULL,dst,NULL);

    return true;

}

/*
 * It copies src surface, specifying the position and size of the image
 * onto dst surface at a desired position.
 * srcX,srcY,srcH and srcW specifies the coordinates and size of the source
 * surface.
 * dstX,dstY specifies the position of the
 */

bool Surfaces::draw(SDL_Surface* src,int srcX, int srcY,int srcH, int srcW,
	SDL_Surface *dst,int dstX,int dstY) {

    if((src == NULL) || (dst == NULL)) {
	return false;
    }

    SDL_Rect srcRect;

    srcRect.x = srcX;
    srcRect.y = srcY;
    srcRect.h = srcH;
    srcRect.w = srcW;

    SDL_Rect dstRect;

    dstRect.x = dstX;
    dstRect.y = dstY;


    SDL_BlitSurface(src,&srcRect,dst,&dstRect);

    return true;


}

void Surfaces::setTransparent(SDL_Surface* surf, int r, int g,int b) {

	if(surf == NULL) {
		return;
	}


	SDL_SetColorKey(surf, SDL_SRCCOLORKEY ,SDL_MapRGB(surf->format,r,g,b));

}
