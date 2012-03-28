/*
 * EqualDecorator.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef EQUALDECORATOR_H_
#define EQUALDECORATOR_H_

#include "FruitDecorator.h"

class EqualDecorator: public FruitDecorator
{
public:
	EqualDecorator();
	EqualDecorator(Fruit* _ptFruit);
	virtual ~EqualDecorator();
	void print();
};

#endif /* EQUALDECORATOR_H_ */
