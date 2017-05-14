/*
VA0517-MSAFuids data visualisation
Receive OSC from SuperCollider
*/

#pragma once

#include "MSAFluid.h"
//#include "MSATimer.h"
#include "ParticleSystem.h"

#include "ofMain.h"
#include "GuiApp.h"
#include "ofxOsc.h"
#include "ofxAssimpModelLoader.h"

#define HOST "localhost"
//#define PORT 12345
#define PORT 57130

#define NUM_MSG_STRINGS 20


// comment this line out if you don't wanna use TUIO
// you will need ofxTUIO & ofxOsc
//#define USE_TUIO

// comment this line out if you don't wanna use the GUI
// you will need ofxSimpleGuiToo, ofxMSAInteractiveObject & ofxXmlSettings
// if you don't use the GUI, you won't be able to see the fluid parameters
#define USE_GUI


#ifdef USE_TUIO
#include "ofxTuio.h"
#define tuioCursorSpeedMult				0.5	// the iphone screen is so small, easy to rack up huge velocities! need to scale down
#define tuioStationaryForce				0.001f	// force exerted when cursor is stationary
#endif


#ifdef USE_GUI
#include "ofxSimpleGuiToo.h"
#endif
class ofApp : public ofBaseApp {

public:
	void setup();
	//void setupGui();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mousePressed(int x, int y, int button);
	void mouseDragged(int x, int y, int button);
	void fadeToColor(float r, float g, float b, float speed);
	void addToFluid(ofVec2f pos, ofVec2f vel, bool addColor, bool addForce);
	//void receiveOscMessages(float x, float y, float z);
	//void gotMessage(ofMessage, msg);
	ofMesh mesh;
	ofEasyCam cam;
	ofxAssimpModelLoader model;
	ofLight light;


	float                   colorMult;
	float                   velocityMult;
	int                     fluidCellsX;
	bool                    resizeFluid;
	bool                    drawFluid;
	bool                    drawParticles;

	msa::fluid::Solver      fluidSolver;
	msa::fluid::DrawerGl	fluidDrawer;

	ParticleSystem          particleSystem;

	ofVec2f                 pMouse;

	ofxOscReceiver          receiver;

	 float oscX = 0.0;
	float oscY = 0.0;

	//shared_ptr<GuiApp> gui2;

	int current_msg_strings;
	string msg_strings[NUM_MSG_STRINGS];
	float timers[NUM_MSG_STRINGS];


#ifdef USE_TUIO
	ofxTuioClient tuioClient;
#endif

};
