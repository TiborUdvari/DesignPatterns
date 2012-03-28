/*
 * State.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef STATE_H_
#define STATE_H_


class Order;

#include <iostream>

using namespace std;

class State
{
public:
	State();
	virtual ~State();
	virtual void goNext(Order* order);
protected:

};

#endif /* STATE_H_ */
