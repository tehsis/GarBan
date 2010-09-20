/*
 * Entity.cpp
 *
 *  Created on: 02/09/2010
 *      Author: tehsis
 */

#include "Entity.h"

void Entity::move(int xx, int yy)
{
	x = xx;
	y = yy;

}

void Entity::draw(SDL_Surface* dst,int tile) {

	int tilesInARow = graphic->w / TILE_SIZE;
	int tileX,tileY;

	tileY = (int)(tile / (tilesInARow)) * TILE_SIZE ;
	tileX = (tile - (((int)(tile/(tilesInARow))) * (tilesInARow))) * TILE_SIZE;

	Surfaces::draw(graphic,tileX,tileY,TILE_SIZE,TILE_SIZE,dst,x,y);
}



Entity::Entity()
{
	graphic = NULL;
	x = 0;
	y = 0;
}

void Entity::setGraphic(SDL_Surface* g) {
	graphic = g;
}

