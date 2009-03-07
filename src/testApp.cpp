#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	float x = 10;
	float y = 10;
	float side = 150;
	square1 = new mollusca::PhysicsSquare(x,y,side);

	float x2 = 150;
	float y2 = 150;
	square2 = new mollusca::PhysicsSquare(x2,y2,side);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(0, 0, 0);
	square1->draw();
	square2->draw();
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){

}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(){

}
