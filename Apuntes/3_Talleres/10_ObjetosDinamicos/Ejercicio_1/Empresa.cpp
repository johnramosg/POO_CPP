/**
Archivo: Empresa.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

#include "Empresa.h"

/*
Nombre: Empresa
Funcion: Constructor
Retorno: No aplica
*/
Empresa::Empresa()
{
  numeroMeses = 0;
  numeroPersonas = 0;
  totalSalario = 0;
}
/*
Nombre: ~Empresa
Funcion: Destructor
Retorno: No aplica
*/
Empresa::~Empresa()
{
}

int Empresa::getNumeroMeses()
{
  return numeroMeses;
}

int Empresa::getNumeroPersonas()
{
  return numeroPersonas;
}

int Empresa::getTotalSalario()
{
  return totalSalario;
}

void Empresa::setNumeroMeses()
{
  int aux;
  cin >> aux;
  numeroMeses = aux;
}

void Empresa::setNumeroPersonas()
{
  int aux;
  cin >> aux;
  numeroPersonas = aux;
}

void Empresa::setTotalSalario(int _totalSalario)
{
  totalSalario = _totalSalario;
}

void Empresa::calcularElTotalSalario()
{
  for (int i = 0; i < numeroMeses; i++)
  {
    for (int j = 0; j < numeroPersonas; j++)
    {
      int aux;
      cin >> aux;
      totalSalario += aux;
    }
  }
}
