/*
 *  PhysicsComponent.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef _PHYSICS_COMPONENT
#define _PHYSICS_COMPONENT
 
#include "Drawable.h"
#include "Vector3d.h"
#include "ofMain.h"

class PhysicsComponent : Drawable{
	protected:
		Vector3d speed;
		Vector3d acceleration;
		Vector3d force;
		Vector3d position;
	
	private:
		bool fixed;
		
	protected:
		PhysicsComponent(): speed(), acceleration(), force(){
			fixed = false;
		}
		
		PhysicsComponent(float& x, float& y): position(x,y), fixed(false){
		}
		
	public:
		virtual void relax() = 0;
		
		void addForce(Vector3d& v){
			if(!fixed){
				force.add(v);
			}
		}
};

#endif