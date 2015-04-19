#pragma once

#include <ofMain.h>
class Logo
{
public:
	Logo(void);
	~Logo(void);

	void setup();
	void update();
	void draw();

	ofVec2f pos2; //variables for Hydra logo
	ofVec2f vel2;
	ofVec2f birth2;

	ofImage hydra;
};

