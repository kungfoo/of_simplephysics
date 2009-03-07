#include "ofMain.h"
#include "testApp.h"

//========================================================================
int main( ){

	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofSetupOpenGL(1400,1050, OF_FULLSCREEN);			// <-------- setup the GL context

	// this kicks off the running of my app
	ofRunApp(new testApp);

}
