/*
Archivo: Empresa.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Empresa
Responsabilidad: Esta clase servira para almacenar el numero de personas y el numero de meses que cobra estas personas para así determinar el total de salario que reciben los trabajadores
Relaciones: Ninguna
*/

#ifndef _EMPRESA_H_
#define _EMPRESA_H_
#include <iostream>
using namespace std;

class Empresa
{
  // Atributos
private:
  int numeroPersonas;
  int numeroMeses;
  int totalSalario;
  // Metodos
public:
  // Constructor
  Empresa();
  // Destructor
  virtual ~Empresa();
  // Funciones
  int getNumeroPersonas();
  int getNumeroMeses();
  int getTotalSalario();
  void setNumeroPersonas();
  void setNumeroMeses();
  void setTotalSalario(int _totalSalario);
  void calcularElTotalSalario();
};

#endif