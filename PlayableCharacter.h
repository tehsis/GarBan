/*
 * PlayableCharacter.h
 *
 *  Created on: 06/09/2010
 *      Author: tehsis
 */

#ifndef PLAYABLECHARACTER_H_
#define PLAYABLECHARACTER_H_

#include "Entity.h"
#include "Animable.h"
#include <SDL/SDL.h>

enum {
	DOWN = 0,
	LEFT,
	RIGHT,
	UP
};

class PlayableCharacter: public Entity,  protected Animable {
	int direction;
public:
	PlayableCharacter();
	PlayableCharacter(int XX,int YY);
	void draw(SDL_Surface* dst);
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void standUp();
	void standDown();
	void standLeft();
	void standRight();
	virtual ~PlayableCharacter();
};

#endif /* PLAYABLECHARACTER_H_ */
