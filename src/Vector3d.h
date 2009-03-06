/*
 *  Vector3d.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
 
#ifndef _VECTOR_3D
#define _VECTOR_3D

struct Vector3d{
	float x, y, z;
	
	Vector3d(){
		x = y = z = 0;
	}
	
	Vector3d(float x, float y, float z){
		this->x = x;
		this->y = y;
		this->z = z;
	}
	
	Vector3d(float x, float y){
		this->x = x;
		this->y = y;
		this->z = 0;
	}
	
	void add(Vector3d& v){
		x += v.x;
		y += v.y;
		z += v.z;
	}
	
	void sub(Vector3d& v){
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}
};

#endif