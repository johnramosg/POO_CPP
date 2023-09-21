/**
Archivo: Pila.h
Autor: Carlos Hernandez
Fecha creacion: 16/01/2022
Fecha ultima modificacion: 16/01/2022
licencia: GNU-GPL
*/

/**
Clase: Pila
Responsabilidad: Ser la clase almacene los datos por medio de una pila, y realizar operaciones con estos datos, como mostralos, sumarlos y demás.
Relaciones: Ninguna
*/

#ifndef _PILA_H_
#define _PILA_H_
#include <string>
#include <iostream>
#include <stack> // std::stack
using namespace std;

class Pila
{
  // Atributos
private:
  stack<int> pila;
  int sumaElementos = 0;
  // Metodos
public:
  // Constructor
  Pila();
  // Destructor
  ~Pila();
  // Funcion para apilar un numero
  void apilar(int numero);
  // Funcion para desapilar un numero
  void desapilar();
  // Funcion para generar pila de tamagno 10 con numeros pares
  void apilarConCondicion();
  // Ver el tamaño de la pila
  int tamagno();
  // Sumar la Pila
  void sumarPila();
  // Vaciar Pila
  void vaciarPila();
  // Mostrar sumaElmentos
  void mostrarSumaElementos();
};

#endif