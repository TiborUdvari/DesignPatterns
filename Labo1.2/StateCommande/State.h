/******************************************************************************************
*
* 	 	 	 	State Class - Generic abstract state class of State Pattern
*		(we made it abstract because it would make nos sense to just have a general state)
 ******************************************************************************************/
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
	virtual void goNext(Order* order) = 0;

};

#endif /* STATE_H_ */
