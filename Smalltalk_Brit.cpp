/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ryaneh173
 */

#include <vector>
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_Brit.h"
using namespace std;

Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT, iPerson) {

}

Smalltalk_Brit::~Smalltalk_Brit(void) {

}

void populatePhrases() {
	vector<std::string> phrases;
	phrases.push_back(BRIT_1);
	phrases.push_back(BRIT_2);
	phrases.push_back(BRIT_3);
	phrases.push_back(BRIT_4);
	phrases.push_back(BRIT_5);
	phrases.push_back(BRIT_6);
	phrases.push_back(BRIT_7);

}
