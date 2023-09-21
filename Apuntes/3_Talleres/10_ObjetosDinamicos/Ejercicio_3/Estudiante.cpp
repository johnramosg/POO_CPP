/**
Archivo: Estudiante.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

#include "Estudiante.h"

/*
Nombre: Estudiante
Funcion: Constructor
Retorno: No aplica
*/
Estudiante::Estudiante(float _promedio)
{
  promedio = _promedio;
}
/*
Nombre: ~Estudiante
Funcion: Destructor
Retorno: No aplica
*/
Estudiante::~Estudiante()
{
}

void Estudiante::setPromedio(){
  string aux;
  getline(cin,aux);
  promedio = stod(aux);
}

double Estudiante::getPromedio(){
  return promedio ;
}

