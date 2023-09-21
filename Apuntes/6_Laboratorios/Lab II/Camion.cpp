/**
Archivo: Camion.cpp
Autores:
Carlos Adrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 28/01/2022
Fecha ultima modificacion: 28/01/2022
licencia: GNU-GPL
*/

#include "Camion.h"
#include <iostream>
#include <string>
using namespace std;


Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placaCamion = laPlaca;
  capacidadMaxima = laCapacidadMaxima;
  pesoTotalCargado = 0;
}

bool Camion::cargarUnObjeto(int pesoDelObjeto)
{
  if (pesoTotalCargado + pesoDelObjeto <= capacidadMaxima)
  {
    pesoTotalCargado += pesoDelObjeto;
    return true;
  }
  else
    return false;
}

int Camion::hacerMudanza()
{
  return pesoTotalCargado;
}

string Camion::cualEsLaPlaca()
{
  return placaCamion;
}