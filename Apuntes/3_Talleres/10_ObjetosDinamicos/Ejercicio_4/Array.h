/*
Archivo: Array.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Array
Responsabilidad: Esta clase servira para almacenar una array dinamico
Relaciones: Ninguna
*/

#ifndef _ARRAY_H_
#define _ARRAY_H_
#include <iostream>
using namespace std;
#include <string>

class Array
{
  // Atributos
private:
  int tamagno;
  double *lista;
  // Metodos
public:
  // Constructor
  Array();
  // Destructor
  virtual ~Array();
  // Funciones
  void setTamagno();
  int getTamagno();
  void construirArray();
  void mostrarArray();
  void ordenarArray();
  void intercambiarValores(int a, int b);
};

#endif