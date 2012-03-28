/*
 * State.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */


#include "State.h"
#include "Order.h"
#include "WaitingState.h"

State::State()
{
}

State::~State()
{
}

void State::goNext(Order*& order)
{

	cout << "Going to waiting state" << endl;

}



