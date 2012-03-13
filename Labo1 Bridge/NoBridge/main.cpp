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
*   Implémentation d'une hiérarchie de classe sans le Pattern Bridge
*
********************************************************************************************/
#include <math.h>

#include "main.h"
#include "GeomGlut.h"

#include "RectangleV1.h"
#include "CircleV1.h"
#include "TriangleV1.h"
#include "SquareV1.h"
extern GeomGlut graphWin;

/******************************************************************************************
*
* 	 	 	 	 	 	 	 	 	 Beginning of the program
*
 ******************************************************************************************/

void mainFunction( void )
{
    graphWin.drawAxes();

   RectangleV1 rec(-2,2,4,2);
   rec.draw();
   CircleV1 cercle(0,0,1,300);
   cercle.draw();
   TriangleV1 triangle(2.0,2.0,1.0,3.0,2.0,1.0);
   triangle.draw();
   SquareV1 square(2.0,2.0,0.5);
   square.draw();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    graphWin.initGraphicsWin( 1000, -15.1, 15.1, -4.1, 4.1 );

    return(0);
}
