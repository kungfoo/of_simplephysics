/*
 *  PhysicsSquare.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _PHYSICS_SQUARE
#define _PHYSICS_SQUARE

#include "PhysicsComponent.h"
#include "MouseListener.h"
#include "ofMain.h"

class PhysicsSquare : PhysicsComponent, MouseListener{
	private:
		float side;

	public:
		PhysicsSquare(float& x, float& y, float& side);
		
		// inherited methods we have to implement
		void draw();
		void relax();
		bool intersects(int& x, int& y);
		void mouseClicked();
		void mouseOver();
		void mouseOut();
};


#endif