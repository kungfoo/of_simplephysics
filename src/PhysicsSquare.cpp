/*
 *  PhysicsSquare.cpp
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "ofMain.h"
#include "PhysicsSquare.h"

using namespace mollusca;

PhysicsSquare::PhysicsSquare(float& x, float& y, float& side) : PhysicsComponent(x, y), side(side){

}

// inherited methods

void PhysicsSquare::draw(){
    ofBeginShape();
    if(hover){
        ofSetColor(128, 128, 128);
    }
    else{
        ofSetColor(0xff0000);
    }
	ofRect(position.x, position.y, side, side);
	ofEndShape();
}

void PhysicsSquare::relax(){

}

bool PhysicsSquare::intersects(int& x, int& y){
	return x >= position.x && x <= position.x+side && y >= position.y && y <= position.y+side;
}

void PhysicsSquare::mouseOver(){
    hover = true;
}

void PhysicsSquare::mouseOut(){
    hover = false;
}

void PhysicsSquare::mouseClicked(){

}
