/******************************************************************************************
*
* 	 	   StarDecorator Class - A concrete decorator class of the decorator pattern
*
 ******************************************************************************************/

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
