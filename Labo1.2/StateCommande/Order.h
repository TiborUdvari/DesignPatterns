/*
 * Order.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */


#ifndef ORDER_H_
#define ORDER_H_


#include <iostream>

class State;

using namespace std;



class Order
{
public:
	Order();
	virtual ~Order();
	void treat();
	void setCurrentState(State* s);
private:
	State* currentState;
};

#endif /* ORDER_H_ */
