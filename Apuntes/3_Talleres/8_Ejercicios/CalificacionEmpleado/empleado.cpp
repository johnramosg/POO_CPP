#include "empleado.h"
#include <iostream>
#include <string>
using namespace std;

/*
Archivo: empleado.cpp
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Nombre: Empleado
Funcion: Constructor
Retorno: No aplica
*/
Empleado::Empleado()
{
}
/*
Nombre: ~Empleado
Funcion: Destructor
Retorno: No aplica
*/
Empleado::~Empleado()
{
}

/*
Nombre: entrarCalificacion
Funcion: Ingresar la calificacion del empleado (letra)
Retorno: No aplica
*/
void Empleado::entrarCalificacion()
{
  string letra;
  cin >> letra;
  calificacion = letra;
}

/*
Nombre: sacar calificacion
Funcion: Sacar la calificacion en palabras
Retorno: calificacion en palabra
*/
void Empleado::sacarCalificacion()
{
  if (calificacion == "a")
  {
    cout << "aceptable" << endl;
  }
  else if (calificacion == "b")
  {
    cout << "buena" << endl;
  }
  else if (calificacion == "e")
  {
    cout << "excelente" << endl;
  }
  else
  {
    cout << "no se clasifico" << endl;
  }
}
