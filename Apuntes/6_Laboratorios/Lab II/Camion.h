/*
Archivo: Camion.h
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

/**
Clase: Camion.h
Responsabilidad: Realizar una clase Camion la cuál pueda guardar objetos (dependiendo de la capacidad del camion) y realizar una mudanza, entre otras cosas.
Relaciones: No tiene 
*/

#ifndef _CAMION_H_
#define _CAMION_H_
#include <string>
#include <iostream>
using namespace std;

class Camion
{
private:
  string placaCamion;
  int capacidadMaxima;
  int pesoTotalCargado;

public:
  /**
  Constructor. Variables iniciales a atributos internos.
  */
  Camion(string laPlaca, int laCapacidadMaxima);

  /**
  Evalua si puede cargar un objeto o no. Retorna 0 = false (No se puede hacer) y 1 = true (Se puede hacer).
  */
  bool cargarUnObjeto(int pesoDelObjeto);
  /**
  Hacer la mudanza. Retorna la carga que transporto.
  */
  int hacerMudanza();
  /**
  Saber cual es la placa del camion.
  */
  string cualEsLaPlaca();
};

#endif