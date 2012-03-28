/*
 * Banana.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef BANANA_H_
#define BANANA_H_

#include "Fruit.h"

class Banana: public Fruit
{
public:
	Banana();
	virtual ~Banana();
	float getPrice();
};

#endif /* BANANA_H_ */
