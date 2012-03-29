#include "DashDecorator.h"

DashDecorator::DashDecorator()
{

}

DashDecorator::DashDecorator(Fruit* _ptFruit) : FruitDecorator(_ptFruit)
{

}

DashDecorator::~DashDecorator()
{

}

void DashDecorator::print()
{
	cout << "#######################################" << endl;
	this->ptFruit->print();
	cout << endl << "#######################################";
}



