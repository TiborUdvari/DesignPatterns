/******************************************************************************************
*
* 	 	 	 	 	 	 Fruit Class - A Component in the composite pattern
* 	 	 	 	 	 	 	It is abstract because of the getPrice method
*
 ******************************************************************************************/

#ifndef FRUIT_H_
#define FRUIT_H_

#include <string>
#include <iostream>

class Fruit
{
public:
	Fruit();
	Fruit(std::string _name, bool isSeeded);
	virtual ~Fruit();
	void print();
	bool isSeeded();
	virtual float getPrice()=0;
protected:
	float price;
private:
	std::string name;
	bool seeded;
};

#endif /* FRUIT_H_ */
