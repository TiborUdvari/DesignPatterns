/*
 * PaidState.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef PAIDSTATE_H_
#define PAIDSTATE_H_

#include "State.h"

class PaidState: public State
{
public:
	PaidState();
	virtual ~PaidState();
protected:
	void goNext(Order*& order);
};

#endif /* PAIDSTATE_H_ */
