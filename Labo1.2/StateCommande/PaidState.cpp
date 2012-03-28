/*
 * PaidState.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "PaidState.h"
#include "Order.h"
#include "SentState.h"

PaidState::PaidState()
{
	cout << "Order is now in paid state" << endl;
}

PaidState::~PaidState()
{
	// TODO Auto-generated destructor stub
}

void PaidState::goNext(Order * order)
{
	cout << "Order going from paid state to sent state" << endl;
	order -> setCurrentState(new SentState());
	delete this;
}



