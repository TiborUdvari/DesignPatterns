/*
 * WaitingState.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */
#include "WaitingState.h"
#include "Order.h"
#include "PaidState.h"

WaitingState::WaitingState()
{
	// TODO Auto-generated constructor stub

}

WaitingState::~WaitingState()
{
	// TODO Auto-generated destructor stub
}

void WaitingState::goNext(Order * order)
{
	order->setCurrentState(new PaidState());
	delete this;
}

