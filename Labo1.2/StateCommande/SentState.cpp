/*
 * SentState.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "SentState.h"

SentState* SentState::ptSingleton = NULL;

SentState::SentState()
{
	Order::arrayStates[2] = this;
	cout << "Order has been sent. (In sent state)" << endl;
}

SentState::~SentState()
{
	// TODO Auto-generated destructor stub
}

void SentState::goNext(Order * order)
{
	// Usually we would delete the order object here to save memory and put it in a DataBase
	// Here we just delete our object since it has reached it's terminal state and cannot go back to it's initial one
	// Making a circular state change would make no sense
	cout << "Order is already in sent state" << endl;
}

SentState *SentState::getInstance()
{
	if (ptSingleton == NULL)
	{
		ptSingleton = new SentState();
	}
	return ptSingleton;
}

