#pragma once

#include <ofMain.h>
class Shield
{
public:
	Shield(void);
	~Shield(void);

	void setup(float _x, float _y);
	void update();
	void draw();

	ofVec2f pos; //variables for Cap's shield
	ofVec2f vel;
	ofVec2f birth;

	ofImage cap;

};

