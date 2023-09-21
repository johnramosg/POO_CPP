/**
Archivo: main.cpp
Autor:
Carlos Adrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 28/01/2022
Fecha ultima modificacion: 28/01/2022
licencia: GNU-GPL
*/

/**
Historia: Utilizando la clase Camion ya definida en el anterior laboratorio crear una nueva clase que almacene varios objetos Camiones, donde primero se  lleva cada objeto al primer camion, y y este ya no puede, se intenta en el segund, y si no puede al tercero y así sucesivamente, calculando al final el total de peso transportado de la mudanza
*/
#include "Camion.h"
#include "EmpresaDeMudanza.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Funcion main
int main()
{
  vector<int> objetos =
      {
          1000, 3000, 5000, 2000, 500, 1800, 4000, 30};

  EmpresaDeMudanza nuevaEmpresa("Camiones Mountain", "2498024-9");

  nuevaEmpresa.comprarCamion("YUI-988", 10000);
  nuevaEmpresa.comprarCamion("OIJ-807", 5000);
  nuevaEmpresa.comprarCamion("KHO-193", 5000);

  nuevaEmpresa.cargarLosCamiones(objetos);
  cout<<nuevaEmpresa.getpesoTotal()<<endl;

  //nuevaEmpresa.saberPeso();

  return 0;
}