#include "vector.h"
#include <iostream>
#include <string>
using namespace std;

/*
Archivo: vector.cpp
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Nombre: Vector
Funcion: Ser el constructor
Retorno: no aplica
*/
Vector::Vector()
{
  vect.clear();
}

/*
Nombre: ~Vector
Funcion: Ser el destructor
Retorno: No aplica
*/
Vector::~Vector()
{
}

/*
Nombre: construyeVector
Funcion: construir un vector con determinado numero de datos
Retorno: No aplica
*/
void Vector::construyeVector(int numeroDatos)
{
  double aux;
  for (int i = 0; i < numeroDatos; i++)
  {
    cin >> aux;
    vect.push_back(aux);
  }
}

/*
Nombre: suma
Funcion: Calcular el promedio del vector
Retorno: double
*/
double Vector::suma()
{
  double suma = 0;
  for (double i = 0; i <10;i++){
    suma += vect[i];
  }
  return suma;
}
/*
Nombre: promedio
Funcion: Calcular el promedio del vector
Retorno: double
*/
double Vector::promedio()
{
  double promedio = suma() / 10;
  return promedio;
}

/*
Nombre: mayorPromedio
Funcion: calcular los elementos mayores al promedio
Retorno: No aplica
*/
void Vector::mayorPromedio()
{
  int aux = 0;
  for (double elem : vect)
    if (elem > promedio())
    {
      aux++;
    }
  cout << aux << endl;
}

/*
Nombre: mayorPromedio
Funcion: calcular los elementos menores o iguales al promedio
Retorno: No aplica
*/
void Vector::menorPromedio()
{
  int aux = 0;
  for (double elem : vect)
    if (elem <= promedio())
    {
      aux++;
    }
  cout << aux << endl;
}
