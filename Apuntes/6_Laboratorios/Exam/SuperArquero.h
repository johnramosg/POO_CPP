/*
Archivo: SuperArquero.h
Autor: Carlos Hernandez
Fecha creacion: 18/03/2022
Fecha ultima modificacion: 18/03/2022
licencia: GNU-GPL
*/

/**
Clase: SuperArquero
Responsabilidad: Modelar una clase que herede los metodos de Personaje, con la diferencia de que aplicara polimorfismo en el metodo averiguar esta vivo, pues el superArquero a pesar de no tener vida siempre estara vivo, ademas de que hay polimorfismo en el metodo atacar
Relaciones: Ninguna
*/

#ifndef _SUPERARQUERO_H_
#define _SUPERARQUERO_H_

#include "Personaje.h"

class SuperArquero : public Personaje
{
  // Atributos
protected:

public:
  // Constructor
  SuperArquero(int vida, int ataque, string nombre = "Arquero++");
  // Destructor
  virtual ~SuperArquero();
  //Metodos para hacer polimorfismo
  virtual void averiguarEstaVivo();
  virtual void atacar(Personaje *personaje);
};

#endif