/*
Archivo: Vagon.h
Autor:
Carlos Andrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 2022/02/25
Fecha ultima modificacion: 2022/02/25
licencia: GNU-GPL
*/

/**
Clase: Vagon
Responsabilidad: Actuar como el vagon de una vía, con un numero y una propiedad para saber si transporta o no a un enfermo.
Relaciones: Ninguna
*/

#ifndef _VAGON_H_
#define _VAGON_H_
#include <iostream>
using namespace std;
#include <vector>

class Vagon
{
  // Atributos
private:
  int numero;
  bool transportaEnfermos;

  // Metodos
public:
  // Constructor
  Vagon(int _numero, bool _transportaEnfermos);
  // Destructor
  ~Vagon();
  // se obtiene el numero del vagon
  int getNumero();
};

#endif