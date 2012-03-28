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
#include "DashDecorator.h"
#include "StarDecorator.h"
#include "EqualDecorator.h"

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

	FruitDecorator* fruitDecorator = new DashDecorator(fruitBasket);
	fruitDecorator->print();
	delete fruitDecorator;

	cout << endl;

	fruitDecorator = new StarDecorator(fruitBasket);
	fruitDecorator->print();
	delete fruitDecorator;

	cout << endl;

	fruitDecorator = new EqualDecorator(fruitBasket);
	fruitDecorator->print();
	delete fruitDecorator;

	// delete ordre inverse de création, null pointers in Basket sinon
	delete fruitBasket;
	delete banana1;
	delete banana2;
	delete banana3;
	// si on redefini pas on arrive pas au affichage

	//TODO effacer commentaires inutiles
	//cout << "Total fruit price in basket : " << fruitBasket->getPrice() << endl;
	return 0;
}
