/******************************************************************************************
*
* 	 	 	 	PaidState Class - One of the concrete states of State Pattern
*										Second State
 ******************************************************************************************/
#ifndef PAIDSTATE_H_
#define PAIDSTATE_H_

#include "State.h"

class PaidState: public State
{
public:
	virtual ~PaidState();
	void goNext(Order* order);
	static PaidState* getInstance();
private:
	PaidState();
	static PaidState* ptSingleton;

};

#endif /* PAIDSTATE_H_ */
