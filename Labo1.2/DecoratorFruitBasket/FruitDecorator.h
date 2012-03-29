/******************************************************************************************
*
* 	 	 	 FruitDecorator Class - Abstract Decorator Class of Decorator Pattern
*
 ******************************************************************************************/

#ifndef FRUITDECORATOR_H_
#define FRUITDECORATOR_H_

#include "Fruit.h"

class FruitDecorator: public Fruit
{
public:
	FruitDecorator();
	FruitDecorator(Fruit* _ptFruit);
	virtual ~FruitDecorator();
	///@Override
	virtual void print()=0;
	float getPrice();
protected:
	Fruit* ptFruit;
};

#endif /* FRUITDECORATOR_H_ */
