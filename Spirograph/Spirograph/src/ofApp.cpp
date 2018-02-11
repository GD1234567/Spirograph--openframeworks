#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableSmoothing();
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetLineWidth(3);
	if (!click) {
		ofSetBackgroundAuto(true);
		b = ofGetMouseX();
		h = ofGetMouseY();
	}

	for (int r = 0; r<360; r += 1) {
		xx[r] = (a - b)*cosf(ofDegToRad(r));
		yy[r] = (a - b)*sinf(ofDegToRad(r));
	}
	ofTranslate(450, 450);
	ofNoFill();
	ofSetColor(255, 0, 0);
	if (!click)
		ofEllipse(0, 0, 2 * a, 2 * a);
	t += 0.010;
	float big = 57.3;
	ofSetColor(0, 255, 0);
	if (!click)
		ofEllipse(xx[int(big*t) % 360], yy[int(big*t) % 360], 2 * b, 2 * b);
	x = (a - b)*cosf(t) + h*cosf((a - b) / b*t);
	y = (a - b)*sinf(t) - h*sinf((a - b) / b*t);
	//float d = dist(x, y, 0, 0);
	ofSetColor(0, 0, 255);
	if (!click)
		ofLine(xx[int(big*t) % 360], yy[int(big*t) % 360], x, y);
	else {
		ofSetColor(252, 191, 35);
		ofSetBackgroundAuto(false);
		ofLine(x, y, x - 1, y);
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
	click = !click;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
