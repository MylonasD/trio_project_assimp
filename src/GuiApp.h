#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class GuiApp: public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	ofParameterGroup parameters;
	//ofParameter<float> radius;
    //ofParameter<float> colorMult;
    //ofParameter<float> velocityMult;
    //ofParameter<int> fluidCellsX;
    //ofParameter<bool> resizeFluid;
   // ofParameter<bool> drawFluid;
   // ofParameter<bool> drawParticles;
	//ofParameter<ofColor> color;
	ofxPanel gui2;
    

};

