/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Historia: Nos encontramos en una empresa que quiere calcular cuanto es el total de salario que se le ha pagado a un numero de personas en ciertos meses, por lo que empieza pidiendole al usuario el numero de personas y el numero de meses, para así calcular el total pagado.
*/

#include "Empresa.h"

// Funcion main
int main()
{
  Empresa *miEmpresa = new Empresa();
  miEmpresa->setNumeroPersonas();
  miEmpresa->setNumeroMeses();
  miEmpresa->calcularElTotalSalario();
  cout << miEmpresa->getTotalSalario() << endl;

  delete miEmpresa;
  miEmpresa = nullptr;

  return 0;
}
