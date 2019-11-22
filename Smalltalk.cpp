/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ryaneh173
 */
#include <string>
#include <vector>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson) {
	const std::string nationality = myNationality;
	this->iPerson = iPerson;
	//this->mySmallTalk = vector<string>; //syntax
	this->current_phrase = 0;
}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	//TODO
	return "Hello";
}

std::string Smalltalk::getTime() {
	//TODO
	return "Hello";
}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	//TODO
	return 0;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	//TODO
	return 0;
}

void Smalltalk::populatePhrases() {
	vector<string> phrases;
}
