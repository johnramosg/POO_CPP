/*
Archivo: Escuela.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Escuela
Responsabilidad: Esta clase servira para almacenar un vector de estudiantes (los cuales llevan dentro un promedio)
*/

#ifndef _ESCUELA_H_
#define _ESCUELA_H_
#include <iostream>
#include <vector>
#include "Estudiante.h"
using namespace std;

class Escuela
{
  // Atributos
private:
  vector <Estudiante> estudiantes;
public:
  // Constructor
  Escuela();
  // Destructor
  virtual ~Escuela();
  // Funciones
  void alojarEstudiantes();
  Estudiante *crearEstudiante();
  void mostrarEstudiantes();
};

#endif