/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2020-09-15
  Licencia: GNU-GPL
*/

/**
  Utilidad para la asignatura: bucles for anidados.

  HISTORIA: muestra la tabla de multiplicar
*/

#include <iostream>
using namespace std;

int main()
{
  // COMO UNA LISTA:
  for (int unNumero = 0; unNumero <= 10; unNumero++)
  {
    for (int otroNumero = 0; otroNumero <= 10; otroNumero++)
    {
      cout << unNumero << " * " << otroNumero << " = " << unNumero * otroNumero << endl;
    }
  }

  // COMO UNA TABLA:
  cout << endl
       << "\t|\t";
  for (int otroNumero = 0; otroNumero <= 10; otroNumero++)
  {
    cout << otroNumero << "\t";
  }
  cout << endl;
  for (int otroNumero = 0; otroNumero <= 11; otroNumero++)
  {
    cout << "----";
  }
  cout << "---" << endl;
  for (int unNumero = 0; unNumero <= 10; unNumero++)
  {
    cout << unNumero << "\t|\t";
    for (int otroNumero = 0; otroNumero <= 10; otroNumero++)
    {
      cout << unNumero * otroNumero << "\t";
    }
    cout << endl;
  }

  return 0;
}
