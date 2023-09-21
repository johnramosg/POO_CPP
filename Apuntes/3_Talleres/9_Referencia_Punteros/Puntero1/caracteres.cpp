/**
Archivo: caracteres.cpp
Autor: Carlos Hernandez
Fecha creacion: 26/01/2022
Fecha ultima modificacion: 26/01/2022
licencia: GNU-GPL
*/

#include "caracteres.h"
#include <iostream>
#include <string>
using namespace std;
#include <string.h>

/*
Nombre: Caracteres
Funcion: Constructor
Retorno: No aplica
*/
Caracteres::Caracteres()
{
}
/*
Nombre: ~Caracteres
Funcion: Destructor
Retorno: No aplica
*/
Caracteres::~Caracteres()
{
}
/*
Nombre: getCadena
Funcion: Obtener el atributo cadena
Retorno: variable de tipo char
*/
void Caracteres::getCadena(){
  char *auxCadena = &cadena[0];
  while(*auxCadena){
    cout << *auxCadena ;
    auxCadena++;
  }
  cout << endl;
}
/*
Nombre: pasarMayusculas
Funcion: pasar a mayusculas una palabra
Retorno: no aplica
*/
void Caracteres::pasarMayusculas(){
  int indice = 0;
  char *auxCadena = &cadena[0];
  while (*auxCadena)
  {
    // Y cambiar cada letra por su representación
    // mayúscula
    cadena[indice] = toupper(cadena[indice]);
    auxCadena++;
    indice++;
  }
}
/*
Nombre: setCadena
Funcion: Darle un valor al atributo cadena y ponerlo en mayusculas
Retorno: no aplica
*/
void Caracteres::setCadena(){
  cin.getline(cadena, 1000, '\n');
  pasarMayusculas(); // transformando a mayuscula la cadena
}
/*
Nombre: numeroVocales
Funcion: contar el numero de vocales del atributo cadena
Retorno: variable de tipo int
*/
int Caracteres::numeroVocales()
{
  char *auxCadena = &cadena[0];
  int count = 0;
  while (*auxCadena)
  { // Mientras cadena no sea null '\0'
    switch (*auxCadena)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
    }
    auxCadena++;
  }
  return count;
}