/*
 * DashDecorator.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef DASHDECORATOR_H_
#define DASHDECORATOR_H_

#include "FruitDecorator.h"


class DashDecorator: public FruitDecorator
{
public:
	DashDecorator();
	DashDecorator(Fruit* _ptFruit);
	virtual ~DashDecorator();
	void print();
};

#endif /* DASHDECORATOR_H_ */
