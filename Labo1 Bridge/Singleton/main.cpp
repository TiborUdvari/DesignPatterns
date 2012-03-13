/********************************************************************************************
*                             ______             _              ____
*                            |  ____|           (_)            |___ \
*                            | |__    __ _ _   _ _ _ __   ___    __) |
*                            |  __|  / _` | | | | | '_ \ / _ \  |__ <
*                            | |____| (_| | |_| | | |_) |  __/  ___) |
*                            |______|\__, |\__,_|_| .__/ \___| |____/
*                                        | |       | |
*                                        |_|       |_|
*
* 	 	 	 	 	 	   Laurent Novac, Tibor Udvari, Jacot Niels
*
*                                Haute Ecole Arc Ingénierie
* 	 	 	 	 	 	 	 	 Année académique 2011-2012
* 	 	 	 	 	 	 	 	 	 	 13 mars 2012
*
* 	 	 	 	 	 	      Laboratoire 1 de Design Patterns
*                                       Pattern Singleton
*
*	Description:
*   Implémentation d'un Pattern Singleton
*
********************************************************************************************/

#include <math.h>

#include "main.h"
#include "GeomGlut.h"

/******************************************************************************************
*
* 	 	 	 	 	 	 	 	 	 Beginning of the program
*
 ******************************************************************************************/

void mainFunction( void )
{
    GeomGlut::getInstance()->drawAxes();
}

int main(int argc, char **argv)
{
    GeomGlut::getInstance()->initGraphicsWin( 1000, -15.1, 15.1, -4.1, 4.1 );

    return(0);
}
