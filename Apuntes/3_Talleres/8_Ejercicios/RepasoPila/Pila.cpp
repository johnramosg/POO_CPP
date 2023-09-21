/**
Archivo: Pila.cpp
Autor: Carlos Hernandez
Fecha creacion: 16/01/2022
Fecha ultima modificacion: 16/01/2022
licencia: GNU-GPL
*/

#include "Pila.h"
#include <iostream>
#include <string>
using namespace std;

/*
Nombre: Pila
Funcion: Constructor
Retorno: No aplica
*/
Pila::Pila()
{
}
/*
Nombre: ~Pila
Funcion: Destructor
Retorno: No aplica
*/
Pila::~Pila()
{
}
/*
Nombre: apilar(int numero)
Funcion: Funcion para apilar un numero
Retorno: No aplica
*/
void Pila::apilar(int numero)
{
  pila.push(numero);
  sumaElementos += numero;
}
/*
Nombre: desapilar
Funcion: Funcion para desapilar un numero
Retorno: No aplica
*/
void Pila::desapilar()
{
  int aux = pila.top();
  pila.pop();
  sumaElementos -= aux;
}
/*
Nombre: vaciarPila
Funcion: Funcion para vaciar la pila
Retorno: No aplica
*/
void Pila::vaciarPila()
{
  int aux = 0;
  while (aux < 10)
  {
    desapilar();
    aux++;
  }
}
/*
Nombre:  apilarConCondicion
Funcion: Funcion Para apilar 10 numeros pares
Retorno: No aplica
*/
void Pila::apilarConCondicion()
{
  for (int i = 2; i <= 20; i += 2)
  {
    apilar(i);
    cout << i << endl;
  }
}
/*
Nombre: tamagno
Funcion: Mostrar el tamaño de la pila
Retorno: dato de tipo int
*/
int Pila::tamagno()
{
  int aux = pila.size();
  return aux;
}
/*
Nombre: mostrarSumaElementos
Funcion: Mostrar la suma de los elementos de la pila
Retorno: dato de tipo int
*/
void Pila::mostrarSumaElementos()
{
  cout << sumaElementos << endl;
}