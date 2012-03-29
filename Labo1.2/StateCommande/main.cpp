#include <iostream>

#include "Order.h"

int main()
{
	Order* order = new Order();
	order->treat();
	order->treat();
	order->treat();
	Order::cleanup();
	return 0;
}
