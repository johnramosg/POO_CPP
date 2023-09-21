/**
Archivo: Escuela.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/
#include "Escuela.h"
#include <stdio.h>
/*
Nombre: Escuela
Funcion: Constructor
Retorno: No aplica
*/
Escuela::Escuela()
{
}
/*
Nombre: ~Escuela
Funcion: Destructor
Retorno: No aplica
*/
Escuela::~Escuela()
{
}

void Escuela::alojarEstudiantes()
{
  int cantidadEstudiantes;
  string aux;
  getline(cin,aux);
  cantidadEstudiantes = stoi(aux);
  for (int i = 0; i < cantidadEstudiantes; i++)
  {
    Estudiante *estudiante = crearEstudiante();
    estudiantes.push_back(*estudiante);
  }
}

Estudiante *Escuela::crearEstudiante()
{
  double promedio;
  string aux;
  getline(cin,aux);
  promedio = stod(aux);
  Estudiante *miEstudiante = new Estudiante(promedio);
  return miEstudiante;
}

void Escuela::mostrarEstudiantes()
{
  cout << "Notas de los estudiantes:" << endl;
  int contador = 1;
  for (Estudiante estudiante : estudiantes)
  {
    cout << "Estudiante "<<contador<<": "<<estudiante.getPromedio() << endl;
  }
}