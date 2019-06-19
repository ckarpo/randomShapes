#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    word=0;
    word2=0;
    word3=0;
    word4=0;
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (word==1){
        ofSetCircleResolution(60);
        ofSetColor(255, 130, 20,40);
        ofDrawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()),ofRandom(40,120));
    }
    if (word2==1){
        ofSetCircleResolution(4);
        ofSetColor(100, 130, 200,40);
        ofDrawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()),ofRandom(40,120));
    }
    if (word3==1){
        ofSetCircleResolution(3);
        ofSetColor(55, 230, 20,40);
        ofDrawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()),ofRandom(40,120));
    }
    if (word4==1){
        ofSetCircleResolution(5);
        ofSetColor(155, 20, 120,40);
        ofDrawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()),ofRandom(40,120));
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='a'){
        word=1;
    
    }
    if(key=='s'){
        word2=1;
        
    }
    if(key=='d'){
        word3=1;
        
    }
    if(key=='f'){
        word4=1;
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key=='a'){
        word=0;
        
    }
    if(key=='s'){
        word2=0;
        
    }
    if(key=='d'){
        word3=0;
    
    }
    if(key=='f'){
        word4=0;
        
    }
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
