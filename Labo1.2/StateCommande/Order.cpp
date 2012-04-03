#include "WaitingState.h"
#include "Order.h"

State** Order::arrayStates = new State*[3];
const unsigned int Order::numberOfStates = 3;
unsigned int Order::numberOfInstances = 0;

Order::Order()
{
	currentState = WaitingState::getInstance();
	numberOfInstances++;
}

Order::~Order()
{
	numberOfInstances--;
	if (numberOfInstances == 0)
	{
		cleanup();
	}
}

void Order::treat()
{
	currentState -> goNext(this); // goes to next state
}

void Order::setCurrentState(State* s)
{
	currentState = s;
}

void Order::cleanup()
{
	for (unsigned int i = numberOfStates; i < 3; i++)
	{
		if(arrayStates[i] != NULL)
		{
			delete arrayStates[i];
		}
	}

}


