/*
 * WaitingState.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */
#include "WaitingState.h"
#include "Order.h"
#include "PaidState.h"

WaitingState* WaitingState::ptSingleton = NULL;

WaitingState::WaitingState()
{
	Order::arrayStates[0] = this;
}

WaitingState::~WaitingState()
{
	// TODO Auto-generated destructor stub
}

void WaitingState::goNext(Order * order)
{
	order->setCurrentState(PaidState::getInstance());
}

WaitingState *WaitingState::getInstance()
{
	if (ptSingleton == NULL)
	{
		ptSingleton = new WaitingState();
	}
	return ptSingleton;
}

