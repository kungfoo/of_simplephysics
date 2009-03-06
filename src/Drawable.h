/*
 *  Drawable.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _DRAWABLE
#define _DRAWABLE

#include "ofMain.h"

class Drawable{
	public:
		virtual void draw() = 0;
};

#endif