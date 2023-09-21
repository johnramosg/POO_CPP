/*
Archivo: Estudiante.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Estudiante
Responsabilidad: Almacenar el promedio de un estudiante
*/

#ifndef _ESTUDIANTE_H_
#define _ESTUDIANTE_H_
#include <iostream>
using namespace std;

class Estudiante
{
  // Atributos
private:
  double promedio;
public:
  // Constructor
  Estudiante(float _promedio);
  // Destructor
  virtual ~Estudiante();
  // Funciones
  void setPromedio();
  double getPromedio();
};

#endif