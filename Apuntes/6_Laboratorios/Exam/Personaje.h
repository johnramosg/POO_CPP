/*
Archivo: Personaje.h
Autor: Carlos Hernandez
Fecha creacion: 18/03/2022
Fecha ultima modificacion: 18/03/2022
licencia: GNU-GPL
*/

/**
Clase: Personaje
Responsabilidad: Modelar una clase base de personaje, con una vida, unos metodos y un atributo para saber si esta vivo o no, y así que sean estos personajes los que luchen en la batalla
Relaciones: Ninguna
*/

#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
// #include <string>
#include <iostream>
using namespace std;
#include <string>

class Personaje
{
  // Atributos
protected:
  int vida;
  int ataque; // No pongo daño debido a que hay problemas al compilar
  bool estaVivo;
  string nombre;

public:
  // Constructor
  Personaje(int vida, int ataque, string nombre);
  // Destructor
  virtual ~Personaje();
  // Getters
  virtual int getVida();
  virtual int getAtaque();
  virtual bool getEstaVivo();
  virtual string getNombre();
  // Setters
  virtual void setVida(int vida);
  virtual void setAtaque(int ataque);
  // Funciones
  virtual void atacar(Personaje *personaje);
  virtual void averiguarEstaVivo();
};

#endif