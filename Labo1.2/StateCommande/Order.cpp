/*
 * Order.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "Order.h"
#include "State.h"

Order::Order()
{
	state = new State();

}

Order::~Order()
{
	// TODO Auto-generated destructor stub
}

void Order::treat()
{
	Order* test = this; // TODO wtf
	state -> goNext(test); // Going to initial state
}



