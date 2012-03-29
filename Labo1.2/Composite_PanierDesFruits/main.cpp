/********************************************************************************************
* 	 	 	 	 	 	 	 	 	 	   Equipe 3
* 	 	 	 	 	 	 	 Tibor Udvari, Laurent Novac, Jacot Nils
* 	 	 	 	 	 	 	 	 Haute Ecole Arc Ingénierie
* 	 	 	 	 	 	 	 	 Année académique 2011-2012
* 	 	 	 	 	 	 	 	 	 	 28 mars 2012
* 	 	 	 	 	 	  		   Labo 1.2 Design Patterns
* 	 	 	 	 	 	  		       Pattern Composite
*
*	Description:
*   Composite pattern implementation
********************************************************************************************/
#include <iostream>
#include "FruitBasket.h"
#include "Banana.h"
#include "Orange.h"
#include "Apple.h"

using namespace std;

/******************************************************************************************
 *
 * 	 	 	 	 	 	 	 	 	 Beginning of the program
 *
 ******************************************************************************************/
int main()
{
	Banana* banana1 = new Banana();
	Banana* banana2 = new Banana();
	Banana* banana3 = new Banana();

	Apple* apple1 = new Apple();
	Orange* orange1 = new Orange();

	FruitBasket* fruitBasket = new FruitBasket();
	fruitBasket->add(banana1);
	fruitBasket->add(banana2);
	fruitBasket->add(apple1);
	fruitBasket->add(orange1);

	fruitBasket->print();

	cout << "Total fruit price in basket : " << fruitBasket->getPrice() << endl;

	/******************************************************************************************
	 * 	 	 	 	 	 	 	 	 	 	Cleanup
	 ******************************************************************************************/
	delete fruitBasket;
	delete apple1;
	delete orange1;
	delete banana3;
	delete banana2;
	delete banana1;


	return 0;
}
