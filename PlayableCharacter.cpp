/*
 * PlayableCharacter.cpp
 *
 *  Created on: 06/09/2010
 *      Author: tehsis
 */

#include "PlayableCharacter.h"

PlayableCharacter::PlayableCharacter() {
	// TODO Auto-generated constructor stub
	direction = DOWN;
}

PlayableCharacter::PlayableCharacter(int XX, int YY) : Entity(XX,YY) {

}

void PlayableCharacter::standUp() {
	setCurrentFrame(10);
}

void PlayableCharacter::standDown()
{
	setCurrentFrame(1);
}

void PlayableCharacter::standRight()
{
	setCurrentFrame(7);
}

void PlayableCharacter::standLeft()
{
	setCurrentFrame(4);
}

PlayableCharacter::~PlayableCharacter() {
	// TODO Auto-generated destructor stub
}

void PlayableCharacter::moveUp() {
	direction = UP;
	if(animate()) {
		moveY(--y);

	}
}

void PlayableCharacter::moveDown() {
	direction = DOWN;
	if(animate()) {
		moveY(++y);

	}
}

void PlayableCharacter::moveLeft() {
	direction = LEFT;
	if(animate()) {
		moveX(--x);
	}
}


void PlayableCharacter::moveRight() {
	direction = RIGHT;
	if(animate()) {
		moveX(++x);
	}
}


void PlayableCharacter::draw(SDL_Surface* dst) {

	int tempFrame;

	tempFrame = currentFrame + (3*direction);


  Entity::draw(dst,tempFrame);
}
