/*
 * SentState.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "SentState.h"

SentState::SentState()
{
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
	//TODO MAKE SINGLETON
	delete this;
}



