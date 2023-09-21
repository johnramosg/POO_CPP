/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-02-12
  Fecha última modificación: 2020-09-15
  Licencia: GNU-GPL
*/

/**
  Utilidad para la asignatura: mostrar dos formas de convertir de string a número:
    - atoi, atof    Está en  #include<cstdlib>   Si encuentran datos raros los ignoran y, el resultado puede ser 0.
    - stoi, stod    Está en  #include<string>     Si encuentran datos raros, lanzan una excepción, que hay que capturar con try-catch.

  HISTORIA: pedir un número y mostrar cual es el anterior y el siguiente.
*/

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  string auxiliar;
  cout << "Introduce un número: ";
  getline(cin, auxiliar);
  int numero = atoi(auxiliar.c_str());
  numero++;
  cout << "El siguiente número es " << numero << endl;

  while (true)
  {
    try
    {
      int otroNumero = stoi(auxiliar);
      otroNumero--;
      cout << "El número anterior es " << otroNumero << endl;
      break;
    }
    catch (...)
    {
      cout << "Eso no es un número. Inténtalo de nuevo: ";
      getline(cin, auxiliar);
    }
  }

  return 0;
}