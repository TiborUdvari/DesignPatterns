/******************************************************************************************
*
* 	 	 	 	SentState Class - One of the concrete states of State Pattern
*										Third State
 ******************************************************************************************/
#ifndef SENTSTATE_H_
#define SENTSTATE_H_

#include "State.h"

class SentState: public State
{
public:
	virtual ~SentState();
	void goNext(Order* order);
	static SentState* getInstance();
private:
	SentState();
	static SentState* ptSingleton;
};

#endif /* SENTSTATE_H_ */
