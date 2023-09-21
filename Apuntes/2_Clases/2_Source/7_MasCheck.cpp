/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-24
  Fecha última modificación: 2021-02-13
  Licencia: GNU-GPL
*/

/**
  Utilidad para la asignatura: Entrada/Salida: cómo se imprime en pantalla y como se lee el teclado
  Cómo verificar entradas correctas, para evitar hackers. Aquí hacemos una verificación somera para números enteros sin signo. Se puede hacer algo más complejo, para que acepte también los signos al principio +- que no haya más de un punto, y el exponente con su signo (eso se puede hacer con Expresiones Regulares para Gramáticas Regulares, que verán en MATEMÁTICAS DISCRETAS II).
  Si el dato de entrada no es un número válido, se le pide al usuario que repita la entrada, usando un bucle while
  Ahora se verifica que no haya más de un punto decimal en la nota, y que no se supere un valor máximo, que puede depender de cada país.

  HISTORIA: a un estudiante se le pregunta su nombre, edad y nota. Luego se imprimen en pantalla esos mismos datos.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  const double notaMaxima = 5.0;
  string nombre; // Aqui voy a guardar el nombre
  int edad;
  double nota;
  string auxiliar;

  cout << "¿Cómo te llamas? ";
  getline(cin, nombre);

  // Verificación de que la entrada de la edad es correcta:
  while (true)
  {
    cout << "¿Cuál es tu edad? ";
    getline(cin, auxiliar);

    bool esNumero = true;
    for (int letra = 0; letra < auxiliar.length(); letra++)
      if (not isdigit(auxiliar[letra]))
      {
        esNumero = false;
        // cerr << "Indice=" << letra << "   Letra=" << auxiliar[letra] << endl;
      }

    if (esNumero)
      break;
    else
      cout << "Edad inválida. Intente de nuevo. Use solo dígitos" << endl;
  }
  edad = stoi(auxiliar);

  // Verificación de que la entrada de la nota es correcta:
  while (true)
  {
    while (true)
    {
      cout << "¿Qué nota sacaste? ";
      getline(cin, auxiliar);

      bool esNumero = true;
      int cantidadDePuntos = 0;
      for (int letra = 0; letra < auxiliar.length(); letra++)
      {
        if (auxiliar[letra] == '.')
          cantidadDePuntos++;

        if (not isdigit(auxiliar[letra]) or cantidadDePuntos > 1)
          esNumero = false;
      }

      if (esNumero)
        break;
      else
        cout << "Nota inválida. Intente de nuevo. Use solo dígitos y el punto decimal (.)" << endl;
    }

    nota = stod(auxiliar);

    if (nota <= notaMaxima and nota >= 0)
      break;
    else
      cout << "La nota supera el valor máximo permitido en este país" << endl;
  }

  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " años, sacó una nota de " << nota << endl;

  return 0;
}