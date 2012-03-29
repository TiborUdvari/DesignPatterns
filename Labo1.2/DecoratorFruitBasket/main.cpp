/********************************************************************************************
* 	 	 	 	 	 	 	 	 	 	   Equipe 3
* 	 	 	 	 	 	 	 Tibor Udvari, Laurent Novac, Jacot Nils
* 	 	 	 	 	 	 	 	 Haute Ecole Arc Ingénierie
* 	 	 	 	 	 	 	 	 Année académique 2011-2012
* 	 	 	 	 	 	 	 	 	 	 28 mars 2012
* 	 	 	 	 	 	  		   Labo 1.2 Design Patterns
* 	 	 	 	 	 	  		      Decorator pattern
*
*	Description:
*   Decorator pattern implementation
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


	/******************************************************************************************
	 * 	 	 	 	 	 	 	 	 	 	Cleanup
	 ******************************************************************************************/
	// delete ordre inverse de création, null pointers in Basket sinons
	delete fruitBasket;
	delete banana1;
	delete banana2;
	delete banana3;
	// si on redefini pas on arrive pas au affichage

	//TODO effacer commentaires inutiles comme ceci
	return 0;
}
