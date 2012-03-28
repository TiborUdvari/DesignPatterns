/*
 * Order.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */


#ifndef ORDER_H_
#define ORDER_H_

class State;

#include <iostream>


using namespace std;

class Order
{
public:
	Order();
	virtual ~Order();
	void treat();
private:
	State* state;
};

#endif /* ORDER_H_ */
