/******************************************************************************************
*
* 	 	 		Fruit Class - A concrete component of the decorator pattern
*
 ******************************************************************************************/

#ifndef FRUIT_H_
#define FRUIT_H_

#include <string>
#include <iostream>

using namespace std;

class Fruit
{
public:
	Fruit();
	Fruit(std::string _name, bool isSeeded);
	virtual ~Fruit();
	virtual void print();
	bool isSeeded();
	virtual float getPrice()=0;
protected:
	float price;
private:
	string name;
	bool seeded;
};

#endif /* FRUIT_H_ */
