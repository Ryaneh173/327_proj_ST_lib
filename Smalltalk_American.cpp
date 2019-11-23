/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ryaneh173
 */

#include <vector>
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
using namespace std;

Smalltalk_American::Smalltalk_American(int iPerson)
:Smalltalk(AMERICAN, iPerson) {

}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson)
:Smalltalk(myNationality, iPerson) {

}

Smalltalk_American::~Smalltalk_American(void) {

}

void Smalltalk_American::populatePhrases() {
	mySmallTalk.clear();
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

