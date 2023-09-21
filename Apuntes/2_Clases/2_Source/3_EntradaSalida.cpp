/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2020-09-15
  Licencia: GNU-GPL
*/

/**
  Utilidad para la asignatura: Entrada/Salida: cómo se imprime en pantalla y como se lee el teclado

  HISTORIA: Pregunta al usuario algunos datos personales y luego los imprime en pantalla.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string nombre;
  int edad;
  double nota;
  string auxiliar;

  cout << "¿Cómo te llamas? ";
  getline(cin, nombre);

  cout << "¿Cuál es tu edad? ";
  getline(cin, auxiliar);
  edad = stoi(auxiliar);

  cout << "¿Qué nota sacaste? ";
  getline(cin, auxiliar);
  nota = stod(auxiliar);

  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " años, sacó una nota de " << nota << endl;

  return 0;
}
