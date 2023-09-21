/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion:26/01/2022
Fecha ultima modificacion:26/01/2022
licencia: GNU-GPL
*/

/**
Historia: Escriba un programa que reciba la dirección de inicio de una cadena de caracteres y devuelva el número de vocales que hay en la cadena.
*/
#include "caracteres.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Funcion main
int main()
{
  Caracteres caracter;
  Caracteres *elCaracter = &caracter;
  (*elCaracter).setCadena();
  cout <<(*elCaracter).numeroVocales()<<endl;
  return 0;
}
