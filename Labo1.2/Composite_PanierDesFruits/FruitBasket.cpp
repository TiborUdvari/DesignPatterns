/*
 * FruitBasket.cpp
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#include "FruitBasket.h"

using namespace std;

FruitBasket::FruitBasket()
{

}

FruitBasket::~FruitBasket()
{
	// Fruit basket does not destroy fruits, on earth ...
}

void FruitBasket::add(Fruit* fruit)
{
	listPtFruits.push_back(fruit);
}

void FruitBasket::remove(Fruit* fruit)
{
	listPtFruits.remove(fruit);
}

void FruitBasket::print()
{
	cout << "Panier [";
	list<Fruit*>::const_iterator itPtFruits;
	for(itPtFruits=listPtFruits.begin(); itPtFruits!=listPtFruits.end(); itPtFruits++)
	{
		(*itPtFruits)->print();
		cout << " ";
	}
	cout << "]";
	if(isSeeded())
	{
		cout << "{With seed}" << endl;
	}
	else
	{
		cout << "{Without seed}" << endl;
	}
}

bool FruitBasket::isSeeded()
{
	list<Fruit*>::const_iterator itPtFruits;
	for(itPtFruits=listPtFruits.begin(); itPtFruits!=listPtFruits.end(); itPtFruits++)
	{
		if((*itPtFruits)->isSeeded())
		{
			return true;
		}
	}
	return false;
}

float FruitBasket::getPrice()
{
	price = 0.0f;
	list<Fruit*>::const_iterator itPtFruits;
	for(itPtFruits=listPtFruits.begin(); itPtFruits!=listPtFruits.end(); itPtFruits++)
	{
		price += (*itPtFruits)->getPrice();
	}
	return price;
}







