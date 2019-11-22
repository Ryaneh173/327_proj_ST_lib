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
	//TODO make sure to put in
	//curentphrase, pwatch, mysmalltlak from pop.phrases

}

Smalltalk_American::~Smalltalk_American(void) {

}

void populatePhrases() {
	vector<std::string> phrases;
	phrases.push_back(AMERICAN_PHRASE_1);
	phrases.push_back(AMERICAN_PHRASE_2);
	phrases.push_back(AMERICAN_PHRASE_3);
	phrases.push_back(AMERICAN_PHRASE_4);
	phrases.push_back(AMERICAN_PHRASE_5);
}

