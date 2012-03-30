#include "PaidState.h"
#include "Order.h"
#include "SentState.h"

PaidState* PaidState::ptSingleton = NULL;

PaidState::PaidState()
{
	Order::arrayStates[1] = this;
	cout << "Order is now in paid state" << endl;
}

PaidState::~PaidState()
{

}

void PaidState::goNext(Order * order)
{
	cout << "Order going from paid state to sent state" << endl;
	order -> setCurrentState(SentState::getInstance());
}

PaidState *PaidState::getInstance()
{
	if (ptSingleton == NULL)
	{
		ptSingleton = new PaidState();
	}
	return ptSingleton;
}



