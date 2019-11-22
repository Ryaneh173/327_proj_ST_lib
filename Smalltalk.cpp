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

std::string saySomething() {
	//TODO
	return "Hello";
}

std::string getTime() {
	//TODO
	return "Hello";
}

std::unique_ptr<Watch>  takeWatch() {
	//TODO
	return 0;
}

bool giveWatch(std::unique_ptr<Watch> &pWatch) {
	//TODO
	return 0;
}

//void populatePhrases() {
//	vector<string> phrases;
//}
