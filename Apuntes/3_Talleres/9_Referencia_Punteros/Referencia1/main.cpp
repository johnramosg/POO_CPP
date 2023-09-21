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
void intercambiarValor(int &valor1, int &valor2)
{
  int temporal = valor1;
  valor1 = valor2;
  valor2 = temporal;
}

// Funcion main
int main()
{
  int a, b;
  cin >> a;
  cin >> b;
  intercambiarValor(a, b);
  cout << a << endl << b << endl;
}
