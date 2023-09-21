/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 16/01/2022
Fecha ultima modificacion: 16/01/2022
licencia: GNU-GPL
*/

/**
Historia: Genere una pila de tamaño 10 con números pares de 2 a 20. sumelos y luego haga que la pila quede vacia y finalmente muestre el tamaño de la pila.
*/
#include "Pila.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <stack> // std::stack
using namespace std;

// Funcion main
int main()
{
  Pila miPila;
  miPila.apilarConCondicion();
  miPila.mostrarSumaElementos();
  miPila.vaciarPila();
  cout << miPila.tamagno() << endl;
}
