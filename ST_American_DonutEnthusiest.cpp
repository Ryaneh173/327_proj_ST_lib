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
(int i):Smalltalk_American() {

}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {

}

void ST_American_DonutEnthusiest::populatePhrases() {
	vector<std::string> phrases;
	phrases.push_back(AMERICAN_DE_PHRASE_1);
	phrases.push_back(AMERICAN_DE_PHRASE_2);
	phrases.push_back(AMERICAN_DE_PHRASE_3);
	phrases.push_back(AMERICAN_DE_PHRASE_4);
	phrases.push_back(AMERICAN_DE_PHRASE_5);

}
