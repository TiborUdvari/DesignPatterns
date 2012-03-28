/*
 * WaitingState.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef WAITINGSTATE_H_
#define WAITINGSTATE_H_

#include "State.h"

class WaitingState: public State
{
public:
	WaitingState();
	virtual ~WaitingState();
protected:
	void goNext(Order*& order);
};

#endif /* WAITINGSTATE_H_ */
