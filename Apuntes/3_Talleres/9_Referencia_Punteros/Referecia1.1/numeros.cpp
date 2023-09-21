/**
Archivo:
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

#include "numeros.h"
#include <iostream>
#include <string>
using namespace std;

/*
Nombre: Numeros
Funcion: Constructor
Retorno: No aplica
*/
Numeros::Numeros()
{
}
/*
Nombre: ~Numeros
Funcion: Destructor
Retorno: No aplica
*/
Numeros::~Numeros()
{
}
/*
Nombre: leerNumero1
Retorno: No aplica
*/
void Numeros::leerNumero1()
{
  int numeroa;
  cin >> numeroa;
  numero1 = numeroa;
}
/*
Nombre: leerNumero2
Retorno: No aplica
*/
void Numeros::leerNumero2()
{
  int numerob;
  cin >> numerob;
  numero2 = numerob;
}
/*
Nombre: intercambiarNumeros
Retorno: No aplica
*/
void Numeros::intercambiarNumeros()
{
  int &referencia1 = numero1;
  int &referencia2 = numero2;
  int temporal = referencia1;
  referencia1 = referencia2;
  referencia2 = temporal;
}
/*
Nombre: imprimirNumeros
Retorno: No aplica
*/
void Numeros::imprimirNumero()
{
  cout << numero1 << endl;
  cout << numero2 << endl;
}