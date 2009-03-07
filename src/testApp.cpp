#include "testApp.h"
#include "stdio.h"

//--------------------------------------------------------------
void testApp::setup(){
    for(int i = 0; i < NUM_SQUARES; i++){
        squares[i] = NULL;
    }

    float x1 = 10;
    float y1 = 10;
    float side = 80;

    float x2 = 300;
    float y2 = 320;

    squares[0] = new PhysicsSquare(x1,y1, side);
    squares[1] = new PhysicsSquare(x2,y2, side);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(0, 0, 0);
	for(int i = 0; i < NUM_SQUARES; i++){
        if(squares[i] != NULL){
            squares[i]->draw();
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){

}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    for(int i = 0; i < NUM_SQUARES; i++){
        if(squares[i] != NULL){
            if(squares[i]->intersects(x,y)){
                squares[i]->mouseOver();
            }
            else{
                squares[i]->mouseOut();
            }
        }
    }
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
