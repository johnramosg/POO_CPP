/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

/**
Historia: ESCRIBIR HISTORIA
*/
#include "inversa.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Funcion main
int main()
{
  float entrada;
  cin >> entrada;
  Inversa objetoInversa;
  objetoInversa.setValor(entrada);
  cout << setprecision(2) << objetoInversa.determinarInversa() << endl;
}
