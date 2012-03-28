/*
 * FruitDecorator.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "FruitDecorator.h"

FruitDecorator::FruitDecorator()
{
	// TODO Auto-generated constructor stub

}

FruitDecorator::FruitDecorator(Fruit* _ptFruit) : ptFruit(_ptFruit)
{

}

FruitDecorator::~FruitDecorator()
{
	// TODO Auto-generated destructor stub
}

float FruitDecorator::getPrice()
{
	return ptFruit->getPrice();
}



