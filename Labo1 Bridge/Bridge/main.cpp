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
*                                       Pattern Bridge
*
*	Description:
*   Implémentation d'une hiérarchie de classe en utilisant le Pattern Bridge
*
********************************************************************************************/

#include <math.h>

#include "main.h"
#include "GeomGlut.h"

#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Carree.h"

extern GeomGlut graphWin;
using namespace std;

/******************************************************************************************
*
* 	 	 	 	 	 	 	 	 	 Beginning of the program
*
 ******************************************************************************************/
void mainFunction( void )
{
    Circle cercle(0,0,1,300);
    cercle.draw();

    Triangle tri(2,2,2);
    tri.draw();

    // Cette syntaxe est utilisé à cause de shadowing quelque part
    Rectangle::Rectangle rec(2.0,2.0,4.0,2.0);
    rec.draw();

    Carree carree(-3,-3,2);
    carree.draw();
}

int main(int argc, char **argv)
{
    graphWin.initGraphicsWin( 1000, -15.1, 15.1, -4.1, 4.1 );

    return(0);
}

