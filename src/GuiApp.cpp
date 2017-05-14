/*
 * GuiApp.cpp
 *
 *  Created on: Oct 28, 2014
 *      Author: arturo
 */

#include "GuiApp.h"

void GuiApp::setup(){

    
    
	//parameters.setName("parameters");
    
	//parameters.add(colorMult.set("colorMult", 50,1,100));
    
   // parameters.add(velocityMult.set("velocityMult",50,1,100));
    
    //parameters.add(fluidCellsX.set("fluidCellsX",50,1,100));
    
   // parameters.add(resizeFluid.set("resizeFluid", 50, 1, 100));
   // parameters.add(drawFluid.set("drawFluid",50,1,100));
    //parameters.add(drawParticles.set("drawParticles", 50, 1, 100));
    
    
    
    
	gui2.setup(parameters);
    
	ofBackground(0);
	ofSetVerticalSync(false);

    

    
}

void GuiApp::update(){

}

void GuiApp::draw(){
	//gui2.draw();
}



