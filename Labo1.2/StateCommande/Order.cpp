/*
 * Order.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "WaitingState.h"
#include "Order.h"

Order::Order()
{
	currentState = new WaitingState();
}

Order::~Order()
{
	// TODO Auto-generated destructor stub
}

void Order::treat()
{
	//Order* test = this; // TODO wtf
	currentState -> goNext(this); // Going to initial state
	//currentState -> goNext(this);
}

void Order::setCurrentState(State* s)
{
	currentState = s;
}





