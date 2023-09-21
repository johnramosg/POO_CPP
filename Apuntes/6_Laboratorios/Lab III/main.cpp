/*
Archivo: main.cpp
Autor:
Carlos Andrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creación: 2022-02-25
Fecha última modificación: 2022-02-25
Licencia: GNU-GPL
*/

/* HISTORIA: hay un tren con 6 vagones numerados consecutivamente de izquierda a derecha, del 1 al 6. En los vagones 2 y 4 hay personas enfermas que conviene transportarlas pero aisladas de las demás. Para ello, vamos a mover estos vagones al final del tren. Por suerte, en la estación hay dos ramales (uno hacia la izquierda y otro hacia la derecha) que nos van a ayudar a hacer este movimiento de vagones.
 */

#include "Via.h"
#include "Vagon.h"
#include <iostream>
using namespace std;

int main()
{
  Via viaPrincipal;
  Via ramalIzquierdo;
  Via ramalDerecho;

  // Situación inicial:
  viaPrincipal.introducirVagon(new Vagon(1, false)); // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(2, true));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(3, false)); // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(4, true));  // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(5, false)); // TOMA PROPIEDAD
  viaPrincipal.introducirVagon(new Vagon(6, false)); // TOMA PROPIEDAD
  cout << "Al inicio: " << viaPrincipal.estadoActual() << endl;

  // Movimientos para llegar a la solución:
  viaPrincipal.retrocederPor(ramalIzquierdo); // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  // cout << "Al :  " << viaPrincipal.estadoActual() << endl;
  viaPrincipal.retrocederPor(ramalIzquierdo); // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(ramalDerecho);   // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(ramalIzquierdo); // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
  viaPrincipal.retrocederPor(ramalDerecho);   // LA VIA PRINCIPAL CEDE PROPIEDAD DEL VAGON A LA OTRA VIA
                                              //  viaPrincipal.avanzarDesde(ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(ramalIzquierdo);  // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(ramalDerecho);    // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA
  viaPrincipal.avanzarDesde(ramalDerecho);    // LA VIA PRINCIPAL TOMA PROPIEDAD DEL VAGON QUE ME CEDE LA OTRA VIA

  // Imprimir la solución:
  viaPrincipal.estadoActual();
  cout << "Al final:  " << viaPrincipal.estadoActual() << endl;
  // cout << "Izquierdo:  " << ramalIzquierdo.estadoActual() << endl;
  // cout << "Derecho:  " << ramalDerecho.estadoActual() << endl;
  return 0;
}