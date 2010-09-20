/*
 * App_event.cpp
 *
 *  Created on: 06/09/2010
 *      Author: tehsis
 */

#include "App.h"


void App::eventKeyDown(SDLKey sym) {

	if(sym == SDLK_UP)
		PC.moveUp();

	if(sym == SDLK_DOWN)
		PC.moveDown();

	if(sym == SDLK_LEFT)
		PC.moveLeft();

	if(sym == SDLK_RIGHT)
		PC.moveRight();




}
