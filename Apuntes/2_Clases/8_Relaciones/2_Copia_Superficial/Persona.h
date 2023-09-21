/*
Archivo:
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

/**
Clase:
Responsabilidad:
Relaciones: Ninguna
*/

#ifndef _PERSONA_H_
#define _PERSONA_H_
#include <iostream>
using namespace std;
#include <string>

class Libro{
};

class Persona
{
  // Atributos
private:
  // Meotodos
protected:
  int edad;
  Libro *libro;
  bool soyElPropietario;
public:
  // Constructor
  Persona(int edad);
  // Destructor
  virtual ~Persona();
  // Funciones
  void copiaSuperFicial(const Persona& otra);
  void comprar(Libro *libro);
};

#endif