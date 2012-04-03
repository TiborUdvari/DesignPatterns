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
#include "Order.h"

/******************************************************************************************
 *
 * 	 	 	 	 	 	 	 	 	 Beginning of the program
 *
 ******************************************************************************************/

int main()
{
	Order* order = new Order();
	order->treat();
	order->treat();
	order->treat();
	return 0;
}
