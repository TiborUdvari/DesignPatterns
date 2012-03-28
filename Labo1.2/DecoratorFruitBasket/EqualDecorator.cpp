/*
 * EqualDecorator.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

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



