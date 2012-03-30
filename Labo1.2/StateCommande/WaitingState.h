/******************************************************************************************
 *
 * 	 	 	 	WaitingState Class - One of the concrete states of State Pattern
 *										First state
 ******************************************************************************************/
#ifndef WAITINGSTATE_H_
#define WAITINGSTATE_H_

#include "State.h"

class WaitingState: public State
{
public:
	virtual ~WaitingState();
	void goNext( Order* order );
	static WaitingState* getInstance();
private:
	WaitingState();
	static WaitingState* ptSingleton;
};

#endif /* WAITINGSTATE_H_ */
