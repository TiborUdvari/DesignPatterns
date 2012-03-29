#include "FruitDecorator.h"

FruitDecorator::FruitDecorator()
{

}

FruitDecorator::FruitDecorator(Fruit* _ptFruit) : ptFruit(_ptFruit)
{

}

FruitDecorator::~FruitDecorator()
{

}

float FruitDecorator::getPrice()
{
	return ptFruit->getPrice();
}



