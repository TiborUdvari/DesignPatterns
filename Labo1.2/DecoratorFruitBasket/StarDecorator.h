/*
 * StarDecorator.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef STARDECORATOR_H_
#define STARDECORATOR_H_

#include "FruitDecorator.h"

class StarDecorator: public FruitDecorator
{
public:
	StarDecorator();
	StarDecorator(Fruit* _ptFruit);
	virtual ~StarDecorator();
	void print();
};

#endif /* STARDECORATOR_H_ */
