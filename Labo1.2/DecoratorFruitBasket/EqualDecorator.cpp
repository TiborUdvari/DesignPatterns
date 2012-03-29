#include "EqualDecorator.h"

EqualDecorator::EqualDecorator()
{

}

EqualDecorator::EqualDecorator(Fruit *_ptFruit) : FruitDecorator(_ptFruit)
{
}

EqualDecorator::~EqualDecorator()
{

}

void EqualDecorator::print()
{
	cout << "=======================================" << endl;
	this->ptFruit->print();
	cout << endl << "=======================================";
}



