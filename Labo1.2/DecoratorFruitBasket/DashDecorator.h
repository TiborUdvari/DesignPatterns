/******************************************************************************************
*
* 	 	 DashDecorator Class - A concrete decorator class of the decorator pattern
*
 ******************************************************************************************/

#ifndef DASHDECORATOR_H_
#define DASHDECORATOR_H_

#include "FruitDecorator.h"


class DashDecorator: public FruitDecorator
{
public:
	DashDecorator();
	DashDecorator(Fruit* _ptFruit);
	virtual ~DashDecorator();
	void print();
};

#endif /* DASHDECORATOR_H_ */
