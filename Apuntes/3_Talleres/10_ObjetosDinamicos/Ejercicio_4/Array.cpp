/**
Archivo: Array.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

#include "Array.h"
/*
Nombre: Array
Funcion: Constructor
Retorno: No aplica
*/
Array::Array()
{
  tamagno = 0;
}
/*
Nombre: ~Array
Funcion: Destructor
Retorno: No aplica
*/
Array::~Array()
{
}

void Array::setTamagno()
{
  string aux;
  getline(cin, aux);
  tamagno = stoi(aux);
}

int Array::getTamagno()
{
  return tamagno;
}

void Array::construirArray()
{
  lista = new double[getTamagno()];
  for (int indice = 0; indice < getTamagno(); indice++)
  {
    string aux;
    getline(cin, aux);
    lista[indice] = stof(aux);
  }
}

void Array::mostrarArray()
{
  for (int indice = 0; indice < getTamagno(); indice++)
  {
    cout << " " << lista[indice] << " ";
  }
  cout << endl;
}

void Array::intercambiarValores(int a, int b)
{
  int aux = lista[a];
  lista[a] = lista[b];
  lista[b] = aux;
}

void Array::ordenarArray()
{
  for (int i = 0; i < getTamagno(); i++)
  {
    for (int j = 0; j < getTamagno() - i + 1; j++)
    {
      if (lista[j] < lista[j + 1])
      {
        intercambiarValores(j, j + 1);
      }
    }
  }
}