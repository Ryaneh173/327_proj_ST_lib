/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: ryaneh173
 */

#include <vector>
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
using namespace std;

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest
(int i):Smalltalk_American(AMERICAN_DE, i) {

}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {

}

void ST_American_DonutEnthusiest::populatePhrases() {
	mySmallTalk.clear();
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);

}
