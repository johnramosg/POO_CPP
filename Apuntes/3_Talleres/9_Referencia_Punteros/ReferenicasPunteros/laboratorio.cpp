/**
Archivo: laboratorio.cpp
Autor: Carlos Hernandez
Fecha creacion: 26/01/2022
Fecha ultima modificacion:26/01/2022
licencia: GNU-GPL
*/

#include "laboratorio.h"
#include <iostream>
#include <string>
using namespace std;

/*
Nombre: Laboratorio
Funcion: Constructor
Retorno: No aplica
*/
Laboratorio::Laboratorio()
{
}
/*
Nombre: ~Laboratorio
Funcion: Destructor
Retorno: No aplica
*/
Laboratorio::~Laboratorio()
{
}
/*
Nombre: getTemperatura
Funcion: obtener el valor del atributo temperatura
Retorno: variable tipo float
*/
float Laboratorio::getTemperatura()
{
  return temperatura;
}
/*
Nombre: setTemperatura
Funcion: darle un valor al atributo temperatura
Retorno: variable tipo float
*/
void Laboratorio::setTemperatura(float valor)
{
  temperatura = valor;
}
/*
Nombre: temperaturaFahrenheitReferencia
Funcion: imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
Retorno: no aplica
*/
void Laboratorio::temperaturaFahrenheitReferencia(float &auxTemperatura)
{
  cout << "----- Parámetros por referencia -----" << endl;
  cout << "Temperatura argumento (fahrenheit) antes: " << auxTemperatura << endl;
  while (auxTemperatura!=212)
  {
    auxTemperatura+=10;
    cout << "Temperatura argumento (referencia): " << auxTemperatura << endl;
  }
  cout << "Temperatura argumento (fahrenheit) después: " << auxTemperatura << endl;
}
/*
Nombre: temperaturaFahrenheitPuntero
Funcion: imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
Retorno: no aplica
*/
void Laboratorio::temperaturaFahrenheitPuntero(float *auxTemperatura){
  cout << "----- Parámetros por puntero -----"<< endl;
  cout << "Temperatura argumento (fahrenheit) antes: " << *auxTemperatura << endl;
  while(*auxTemperatura!=212){
    *auxTemperatura +=10;
    cout << "Temperatura argumento (puntero): " << *auxTemperatura << endl;
  }
  cout << "Temperatura argumento (fahrenheit) después: " << *auxTemperatura << endl;
}