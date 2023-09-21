/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 21/01/2022
Fecha ultima modificacion: 21/01/2022
licencia: GNU-GPL
*/

/**
Historia: Escriba un programa que reciba dos numeros y los intercambie usando un antes de la funcion y un despues de la funcion.
*/
#include "numeros.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

/*
Nombre: cambiarValor
Parametros: dos valores enteros que al final se combierten en referencia
Salida: No aplica
*/

// Funcion main
int main()
{
  Numeros numeros;
  numeros.leerNumero1();
  numeros.leerNumero2();
  numeros.intercambiarNumeros();
  numeros.imprimirNumero();
}
