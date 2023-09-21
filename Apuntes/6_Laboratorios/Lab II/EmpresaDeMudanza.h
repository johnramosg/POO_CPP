/*
Archivo: EmpresaMudanza.h
Autoreses:
Carlos Adrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 28/01/2022
Fecha ultima modificacion:28/01/2022
licencia: GNU-GPL
*/

/**
Clase: EmpresaDeMudanza
Responsabilidad: Esa empresa debe tener un nombre, un nit (string) y una flota (vector) de Camiones, inicialmente vacía. Después de construir la empresa, se le puede dar órdenes para que compre varios Camiones. Y después ya puede hacer la mudanza del Taller 1.
Relaciones: contiene Camiones
*/

#ifndef _EMPRESADEMUDANZA_H_
#define _EMPRESADEMUDANZA_H_
#include <string>
#include "Camion.h"
#include <iostream>
using namespace std;
#include <vector>

class EmpresaDeMudanza
{
  // Atributos
private:
  string nombre;
  string nit;
  vector <Camion> camiones;
  int totalPeso=0;
public:
  /**
  Constructor del objeto, con dos variables iniciales
  */
  EmpresaDeMudanza(string _nombre, string _nit);
  /**
  Destructor del objeto
  */
  ~EmpresaDeMudanza();
  /**
  Metodo para comprar un Camion, es decir crear un objeto del tipo Camion y y enviarlo al vector camiones (atributo de esta clase)
  */
  void comprarCamion(string nombre, int peso);
  /**
  Determinar si el camion puede llevar al respectivo objeto, y si es así almacenarlo en el camión, de caso contrario llevarlo al siguiente camion hasta que estos se acaben
  */
  void cargarLosCamiones(vector <int> objetos);
  /**
  Añadirle el determinado peso del objeto al atributo totalPeso de la clase
  */
  void pesoTotal(int objeto);
  /**
  Obtener el peso del atributo totalPeso
  */
  int getpesoTotal();
  /**
  Determinar el peso total que lleva la empresa de mundanza, es decir el peso que lleva de cada uno de sus camiones
  */
  void saberPeso();
};

#endif