/*
Archivo: Via.h
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
Clase: Via
Responsabilidad: Actuar como Via con un vector de vagones, la cual puede ceder y tomar vagones de otras vias
Relaciones: Conoce a Vagon
*/

#ifndef _VIA_H
#define _VIA_H

#include <vector>
#include "Vagon.h"
#include <iostream>
#include <string>
using namespace std;

class Via
{
private:
  // Vector de punteros de la clase Vagon
  vector<Vagon *> vagones;
  // Ponemos los siguientes metodos porque son metodos que realmente el usuario no va a utilizar, si no la clase como tal para su funcionamiento
  void eliminarUltimoVagon();
  Vagon *getUltimoVagon();

public:
  Via();
  ~Via();
  void introducirVagon(Vagon *_vagones);
  int numerodeVagones();
  void retrocederPor(Via &_otraVia);
  void avanzarDesde(Via &_otraVia);
  string estadoActual();
  vector<Vagon *> *getVagones();
};

#endif