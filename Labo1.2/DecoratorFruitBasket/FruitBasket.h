/*
 * PanierDeFruit.h
 *
 *  Created on: 28 mars 2012
 *      Author: Tibor Udvari
 */

#ifndef FRUITBASKET_H_
#define FRUITBASKET_H_

#include <list>
#include "Fruit.h"

class FruitBasket: public Fruit
{
public:
	FruitBasket();
	virtual ~FruitBasket();
	void add(Fruit* fruit);
	void remove(Fruit* fruit);
	void print();
	bool isSeeded();
	float getPrice();
private:
	std::list<Fruit*> listPtFruits;
};

#endif /* PANIERDEFRUIT_H_ */
