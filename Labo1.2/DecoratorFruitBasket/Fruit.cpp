/*
 * Fruit.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */
#include "Fruit.h"

Fruit::Fruit()
{
	this->price = 0.0f;

}

Fruit::Fruit(string _name, bool _seeded) : name(_name), seeded(_seeded)
{

}

Fruit::~Fruit()
{

}

void Fruit::print()
{
	cout << name ;
}

bool Fruit::isSeeded()
{
	return seeded;
}



