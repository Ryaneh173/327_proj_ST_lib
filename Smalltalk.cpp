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
#include "./includes/Smalltalk_Brit.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/Functions.h"

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0) {

}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	this->populatePhrases();
	int numPhrases;
	const int aPhrase = 5;
	const int bPhrase = 7;
	const int dPhrase = 10;
	if (this->nationality == AMERICAN_DE) {
		numPhrases = current_phrase%dPhrase;
		current_phrase++;
		return mySmallTalk[numPhrases];
	}

	else if (this->nationality == AMERICAN) {
			numPhrases = current_phrase%aPhrase;
			current_phrase++;
			return mySmallTalk[numPhrases];
		}

	else if (this->nationality == BRIT) {
			numPhrases = current_phrase%bPhrase;
			current_phrase++;
			return mySmallTalk[numPhrases];
		}

	return "Has no nationality";

}

std::string Smalltalk::getTime() {
	if (this->pWatch == 0) {
		return I_DO_NOT_HAVE_A_WATCH;
	}

	else {
		return this->pWatch->getTime();
	}
}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	std::unique_ptr<Watch> watch;
	if (pWatch != 0) {
		watch = 0;
	}

	watch = std::move(pWatch);
	return watch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch != 0) {
		return false;
	}

	else {
		this->pWatch = std::move(pWatch);
		return true;
	}
}
