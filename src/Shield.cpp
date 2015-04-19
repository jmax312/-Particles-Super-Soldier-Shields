#include "Shield.h"


Shield::Shield(void){
	pos = ofVec2f(512, 384);
	vel = ofVec2f(ofRandom(-2.5, 2.5), ofRandom(-2.5, 2.5));

	cap.loadImage("images/cap.png");
	
}


Shield::~Shield(void)
{
}

void Shield::setup(float _x, float _y){
	pos = ofVec2f(_x, _y); //this will let us have the shields follow the mouse
	birth = pos; //this will be used to erase shields after they have gone some distance from their point of origin

}

void Shield::update(){
	pos+=vel;

}

void Shield::draw(){
	ofPushMatrix();
	ofTranslate(pos);
	cap.draw(0, 0);
	ofPopMatrix();

}
	