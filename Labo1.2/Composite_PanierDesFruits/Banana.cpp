/*
 * Banana.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "Banana.h"

Banana::Banana() : Fruit("Banana", false)
{
	price = 2.0f;
}

Banana::~Banana()
{

}

float Banana::getPrice()
{
	return price;
}



