/*
 * State.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef STATE_H_
#define STATE_H_

class Order;



class State
{
public:
	State();
	virtual ~State();
protected:
	virtual void goNext(Order*& order);
};

#endif /* STATE_H_ */
