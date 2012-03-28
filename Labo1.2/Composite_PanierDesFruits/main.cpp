/********************************************************************************************
* 	 	 	 	 	 	 	 	 	 	 Tibor Udvari
* 	 	 	 	 	 	 	 	 Haute Ecole Arc Ingénierie
* 	 	 	 	 	 	 	 	 Année académique 2011-2012
* 	 	 	 	 	 	 	 	 	 	 28 mars 2012
* 	 	 	 	 	 	  		Cours de'algorithmes numeriques
*	Description:
*   description
********************************************************************************************/
#include <iostream>
#include "FruitBasket.h"
#include "Banana.h"

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

	FruitBasket* fruitBasket = new FruitBasket();
	fruitBasket->add(banana1);
	fruitBasket->add(banana2);

	fruitBasket->print();

	cout << "Total fruit price in basket : " << fruitBasket->getPrice() << endl;
	return 0;
}
