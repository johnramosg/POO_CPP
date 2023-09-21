/**
Archivo: inversa.cp
Autor: Carlos Hernandez
Fecha creacion:26/01/2022
Fecha ultima modificacion:26/01/2022
licencia: GNU-GPL
*/

#include "inversa.h"
#include <iostream>
#include <string>
using namespace std;

/*
Nombre: Inversa
Funcion: Constructor
Retorno: No aplica
*/
Inversa::Inversa()
{
}
/*
Nombre: ~Inversa
Funcion: Destructor
Retorno: No aplica
*/
Inversa::~Inversa()
{
}
/*
Nombre: inversaDiferenteCero
Funcion: Determinar la inversa de un numero que sea distinto de cero
Retorno: No aplica
*/
float Inversa::inversaDiferenteCero()
{
  float &aux = valor;
  aux = 1 / aux;
  return getValor();
}
/*
Nombre: inversaIgualCero
Funcion: Determinar la inversa de un numero que sea igual a cero
Retorno: No aplica
*/
float Inversa::inversaIgualCero()
{
  float &aux = valor;
  return getValor();
}
/*
Nombre: determinarInversa
Funcion: Dependiendo del valor de numero, llamar a una funcion especifica.
Retorno: No aplica
*/
float Inversa::determinarInversa()
{
  if (valor != 0)
  {
    return inversaDiferenteCero();
  }
  else
  {
    return inversaIgualCero();
  }
}
/*
Nombre: getValor
Funcion: Obtener el atributo valor del objeto
Retorno: No aplica
*/
float Inversa::getValor()
{
  return valor;
}
/*
Nombre: setValor
Funcion: Cambiar el atributo del valor del objeto
Retorno: No aplica
*/
void Inversa::setValor(float numero)
{
  valor = numero;
}