/******************************************************************************************
*
* 	 	 	 				Order Class - Context Class of State Pattern
*
 ******************************************************************************************/
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
	static State** arrayStates;
private:
	void cleanup(); // cleans the states singletons
	State* currentState;
	static const unsigned int numberOfStates;
	static unsigned int numberOfInstances; //safety for the cleanup, we should only be able to call it if there are no order objects
										// if there are we weould be deleting states of objects that still exist
};

#endif /* ORDER_H_ */
