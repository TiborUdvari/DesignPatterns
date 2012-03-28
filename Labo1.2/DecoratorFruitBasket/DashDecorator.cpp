/*
 * DashDecorator.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "DashDecorator.h"

DashDecorator::DashDecorator()
{
	// TODO Auto-generated constructor stub

}

DashDecorator::DashDecorator(Fruit* _ptFruit) : FruitDecorator(_ptFruit)
{

}

DashDecorator::~DashDecorator()
{
	// TODO Auto-generated destructor stub
}

void DashDecorator::print()
{
	cout << "#######################################" << endl;
	this->ptFruit->print();
	cout << endl << "#######################################";
}



