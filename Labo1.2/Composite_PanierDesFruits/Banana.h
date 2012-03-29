/******************************************************************************************
*
* 	 	 	 	 	 	 Banana Class - A Leaf in the composite pattern
*
 ******************************************************************************************/

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
