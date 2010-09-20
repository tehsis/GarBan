/*
 * EventHandler.h
 *
 *  Created on: 05/09/2010
 *      Author: tehsis
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_

#include <SDL/SDL.h>

class EventHandler {
public:
	EventHandler() {};
	virtual ~EventHandler() {};
	void catchEvent(SDL_Event* e);
	virtual void eventQuit() {};
	virtual void eventKeyDown(SDLKey sym) {};
	virtual void eventKeyUp(SDLKey sym) {};
};

#endif /* EVENTHANDLER_H_ */
