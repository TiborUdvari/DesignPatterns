/******************************************************************************************
*
* 	 	 EqualDecorator Class - A concrete decorator class of the decorator pattern
*
 ******************************************************************************************/

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
