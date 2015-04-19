#include "ofApp.h"
/*Captain America shield image found at http://fc05.deviantart.net/fs70/f/2012/136/e/f/captain_america_shield_icon_by_thx1138666-d4zyy3t.png
Hydra logo found at http://media.moddb.com/images/members/2/1507/1506261/Hydra_logo.png 
Map found at http://commons.wikimedia.org/wiki/File:Second_world_war_europe_1941-1942_map_de.png
These images have been used purely for educational purposes*/
//--------------------------------------------------------------
void ofApp::setup(){
	map.loadImage("images/map.png");
	win = false;
}

//--------------------------------------------------------------
void ofApp::update(){
	Shield tempCap; //make a brand new shield
	tempCap.setup(ofGetMouseX(), ofGetMouseY());
	cap.push_back(tempCap); //push it in from the end of the vector (becomes newest one on the very end)
	for (int i = 0; i < cap.size(); i++){
		cap[i].update();
		float distance = ofDist(cap[i].birth.x, cap[i].birth.y, cap[i].pos.x, cap[i].pos.y);
		if (distance > 40){
			cap.erase(cap.begin()+i); //gets rid of shields after they go too far from the mouse
			//go into vector of shields at the beginning and find the one that's at "i" and erase; resizes the vector
			i--; //makes sure no shield misses its update
		}
		
	}

	Logo tempHydra;
	tempHydra.setup();
	hydra.push_back(tempHydra);
	for (int i = 0; i < hydra.size(); i++){
		hydra[i].update();
		float distance = ofDist(hydra[i].birth2.x, hydra[i].birth2.y, hydra[i].pos2.x, hydra[i].pos2.y);
		float distance2 = ofDist(ofGetMouseX(), ofGetMouseY(), hydra[i].pos2.x, hydra[i].pos2.y);
		if (distance > 600 || distance2 < 30){
			hydra.erase(hydra.begin()+i);
			i--; 
			/*if (i<=10 && ofGetElapsedTimef() >= 3){
			win = true;
		}*/
		}
		
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	map.draw(0,-100);
	for (int i = 0; i < cap.size(); i++){
		cap[i].draw();
	}
	for (int i = 0; i < hydra.size(); i++){
		hydra[i].draw();
	}
	if (win == true){
		cout << "Good job, soldier." << endl;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
