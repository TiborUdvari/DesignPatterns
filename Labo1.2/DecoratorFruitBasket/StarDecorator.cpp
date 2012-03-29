#include "StarDecorator.h"

StarDecorator::StarDecorator()
{

}

StarDecorator::StarDecorator(Fruit *_ptFruit) : FruitDecorator(_ptFruit)
{
}

StarDecorator::~StarDecorator()
{

}

void StarDecorator::print()
{
	cout << "***************************************" << endl;
	this->ptFruit->print();
	cout << endl << "***************************************";
}
