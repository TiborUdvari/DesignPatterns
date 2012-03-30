#include "SentState.h"

SentState* SentState::ptSingleton = NULL;

SentState::SentState()
{
	Order::arrayStates[2] = this;
	cout << "Order has been sent. (In sent state)" << endl;
}

SentState::~SentState()
{

}

void SentState::goNext(Order * order)
{
	// Here we just delete our object since it has reached it's terminal state and cannot go back to it's initial one
	// Making a circular state change would make no sense
	// Here we would normally save to a DataBase
	cout << "Order is already in sent state" << endl;
}

SentState *SentState::getInstance()
{
	if (ptSingleton == NULL)
	{
		ptSingleton = new SentState();
	}
	return ptSingleton;
}

