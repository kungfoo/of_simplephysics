/*
 *  PhysicsSquare.cpp
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "PhysicsSquare.h"
#include "ofMain.h"

PhysicsSquare::PhysicsSquare(float& x, float& y, float& side) : PhysicsComponent(x, y), side(side){
	
}

// inherited methods

void PhysicsSquare::draw(){
	ofSetColor(128, 128, 128);
	ofRect(position.x, position.y, side, side);
}

void PhysicsSquare::relax(){
	
}

bool PhysicsSquare::intersects(int& x, int& y){
	return false;
}

void PhysicsSquare::mouseOver(){
	
}

void PhysicsSquare::mouseOut(){
	
}

void PhysicsSquare::mouseClicked(){
	
}