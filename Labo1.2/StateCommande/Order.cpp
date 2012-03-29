/*
 * Order.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "WaitingState.h"
#include "Order.h"

State** Order::arrayStates = new State*[3];
unsigned int Order::numberOfStates = 3;

Order::Order()
{
	currentState = WaitingState::getInstance();
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

void Order::cleanup()
{
	for (unsigned int i = numberOfStates; i < 3; i++)
	{
		if(arrayStates[i] != NULL)
		{
			delete arrayStates[i];
		}
	}

}


