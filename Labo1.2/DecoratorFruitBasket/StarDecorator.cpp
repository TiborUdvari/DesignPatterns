/*
 * StarDecorator.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "StarDecorator.h"

StarDecorator::StarDecorator()
{
	// TODO Auto-generated constructor stub

}

StarDecorator::StarDecorator(Fruit *_ptFruit) : FruitDecorator(_ptFruit)
{
}

StarDecorator::~StarDecorator()
{
	// TODO Auto-generated destructor stub
}

void StarDecorator::print()
{
	cout << "***************************************" << endl;
	this->ptFruit->print();
	cout << endl << "***************************************";
}



