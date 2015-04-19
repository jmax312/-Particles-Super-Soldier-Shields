#include "Logo.h"


Logo::Logo(void)
{
	//pos2 = ofVec2f(450, 450);
	vel2 = ofVec2f(ofRandom(-4, 4), ofRandom(-2.5, 4));

	hydra.loadImage("images/hydra.png");
}


Logo::~Logo(void)
{
}

void Logo::setup(){
	pos2 = ofVec2f(450, 390);
	birth2 = pos2;
}

void Logo::update(){
	pos2+=vel2;
}

void Logo::draw(){
	hydra.draw(pos2);
}