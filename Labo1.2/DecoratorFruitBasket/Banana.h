/******************************************************************************************
*
* 	 	 		Banana Class - A concrete component of the decorator pattern
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
