/*
 * SentState.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef SENTSTATE_H_
#define SENTSTATE_H_

#include "State.h"

class SentState: public State
{
public:
	virtual ~SentState();
	void goNext(Order* order);
	static SentState* getInstance();
private:
	SentState();
	static SentState* ptSingleton;
};

#endif /* SENTSTATE_H_ */
