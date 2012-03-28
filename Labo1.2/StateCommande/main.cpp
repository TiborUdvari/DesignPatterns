#include <iostream>

#include "Order.h"

int main()
{
	Order* order = new Order();
	order->treat();
	order->treat();
	order->treat();
	//order->currentState->goNext(order);
	return 0;
}
