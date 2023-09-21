/*
Archivo: inversa.h
Autor: Carlos Hernandez
Fecha creacion:26/01/2022
Fecha ultima modificacion:26/01/2022
licencia: GNU-GPL
*/

/**
Clase: inversa.h
Responsabilidad: Declarar una clase que sirva para cambiar el valor de un numero por su inversa
Relaciones: Ninguna
*/

#ifndef _INVERSA_H_
#define _INVERSA_H_
#include <string>
#include <iostream>
using namespace std;

class Inversa
{
  // Atributos
private:
  float valor;
  // Meotodos
public:
  // Constructor
  Inversa();
  // Destructor
  ~Inversa();
  // Funciones
  float inversaDiferenteCero();
  float inversaIgualCero();
  float determinarInversa();
  void setValor(float numero);
  float getValor();
};

#endif