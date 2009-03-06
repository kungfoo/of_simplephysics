#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofAddons.h"
#include "PhysicsComponent.h"
#include "Drawable.h"
#include "Dragable.h"
#include "MouseListener.h"
#include "PhysicsSquare.h"

class testApp : public ofSimpleApp{
	private:
		PhysicsSquare* square1;
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();
		
		
};

#endif
	
