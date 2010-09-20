/*
 * EventHandler.cpp
 *
 *  Created on: 05/09/2010
 *      Author: tehsis
 */

#include "EventHandler.h"



void EventHandler::catchEvent(SDL_Event *e) {

	switch(e->type) {
	case SDL_QUIT:
		eventQuit();
		break;
	case SDL_KEYDOWN:
		eventKeyDown(e->key.keysym.sym);
		break;
	case SDL_KEYUP:
		eventKeyUp(e->key.keysym.sym);
		break;
	}
}



