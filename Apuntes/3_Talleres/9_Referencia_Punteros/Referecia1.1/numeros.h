/*
Archivo: intercambiar.h
Autor: Carlos Hernandez
Fecha creacion: 21/01/2022
Fecha ultima modificacion: 21/01/2022
licencia: GNU-GPL
*/

/**
Clase: Numeros
Responsabilidad: Almacenar dos
Relaciones: Ninguna
*/

#ifndef _NUMEROS_H_
#define _NUMEROS_H_
#include <string>
#include <iostream>
using namespace std;

class Numeros
{
  // Atributos
private:
  int numero1;
  int numero2;
  // Meotodos
public:
  // Constructor
  Numeros();
  // Destructor
  ~Numeros();
  // Funciones
  void leerNumero1();
  void leerNumero2();
  void intercambiarNumeros();
  void imprimirNumero();
};

#endif