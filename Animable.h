/*
 * Animable.h
 *
 *  Created on: 04/09/2010
 *      Author: tehsis
 */

#ifndef ANIMABLE_H_
#define ANIMABLE_H_

/*
 * Class name: Animable
 * Description: This class handles the animation of a sprite. It just
 * increase the currentFrame variable according the desired frameRate.
 */

#include <SDL/SDL.h>

class Animable {
	int framesPerSecond; //Animation speed.
	int lastTime; // Last time the currentFrame has change.
	int maxFrames;
public:
	int currentFrame;
	Animable();
	virtual ~Animable();
	bool animate();
    void setCurrentFrame(int currentFrame);
    void setFramesPerSecond(int framesPerSecond);
    void resetLastTime();
};

#endif /* ANIMABLE_H_ */
