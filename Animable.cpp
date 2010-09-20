/*
 * Animable.cpp
 *
 *  Created on: 04/09/2010
 *      Author: tehsis
 */

#include "Animable.h"


Animable::Animable() {
	currentFrame = 0;
	framesPerSecond = 1;
    lastTime = 0;
    maxFrames = 2;


}

Animable::~Animable() {
	// TODO Auto-generated destructor stub
}



void Animable::setCurrentFrame(int currentFrame)
{
    this->currentFrame = currentFrame;
}

/*Class: Animable
 * Function: void animate()
 * Description: Iterates throught the animation's frames according
 * the desired animation rate.
 */

bool Animable::animate()
{
	if(lastTime + framesPerSecond > SDL_GetTicks()) {
		return false;
	}

	lastTime = SDL_GetTicks();

	if(currentFrame == maxFrames) {
		currentFrame = 0;
	}
	else {
	currentFrame++;
	}

	return true;
}

void Animable::setFramesPerSecond(int framesPerSecond)
{
    this->framesPerSecond = framesPerSecond;
}

void Animable::resetLastTime()
{
	lastTime = 0;
}

