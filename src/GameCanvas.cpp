/*
 * GameCanvas.cpp
 *
 *  Created on: May 6, 2020
 *      Author: noyan
 */


#include "GameCanvas.h"


GameCanvas::GameCanvas(gBaseApp *root) : gBaseCanvas(root) {
}

GameCanvas::~GameCanvas() {
}

void GameCanvas::setup() {
//	logi("GlistApp setup");
	logo.loadImage("gamelab-istanbul_logo_128.png");
}

void GameCanvas::update() {
	logi("GlistApp update");
}

void GameCanvas::draw() {
	logi("GlistApp draw");
	logo.draw((getWidth() - logo.getWidth()) / 2, (getHeight() - logo.getHeight()) / 2);
}

void GameCanvas::keyPressed(int key) {
//	logi("GC", "keyPressed:" + gToStr(key));
}

void GameCanvas::keyReleased(int key) {
//	logi("GC", "keyReleased:" + gToStr(key));
}

void GameCanvas::mouseMoved(int x, int y) {
//	logi("mouseMoved x:" + gToStr(x) + ", y:" + gToStr(y));
}

void GameCanvas::mouseDragged(int x, int y, int button) {
//	logi("mouseDragged x:" + gToStr(x) + ", y:" + gToStr(y) + ", b:" + gToStr(button));
}

void GameCanvas::mousePressed(int x, int y, int button) {
}

void GameCanvas::mouseReleased(int x, int y, int button) {
//	logi("GC", "mouseReleased, button:" + gToStr(button));
}

void GameCanvas::mouseEntered() {
}

void GameCanvas::mouseExited() {
}

void GameCanvas::showNotify() {

}

void GameCanvas::hideNotify() {

}

