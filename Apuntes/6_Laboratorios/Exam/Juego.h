/*
Archivo: Juego.h
Autor: Carlos Hernandez
Fecha creacion: 18/03/2022
Fecha ultima modificacion: 18/03/2022
licencia: GNU-GPL
*/

/**
Clase: Juego
Responsabilidad: Modelar el mundo donde se desarrollara el juego, por un lado los arqueros y por el otro los Draconaurius, con metodos para atacar, terminar el juego y demás
Relaciones:
Contiene Personaje
*/

#ifndef _JUEGO_H_
#define _JUEGO_H_

#include "Personaje.h"
#include "SuperArquero.h"
#include <vector>

class Juego
{
  // Atributos
private:
  vector<Personaje *> arqueros;
  vector<Personaje *> draconaurius;
  bool isJuego;
  bool arquerosVivos;
  bool draconauriusVivos;

private:
  void averguarArqueros();
  void averguarDraconaurius();

  void atacarArqueros();
  void atacarDraconaurius();

public:
  Juego();

  ~Juego();

  void agregarArquero(Personaje *personaje);

  void agregarArqueros(vector<Personaje *> personajes);

  void agregarDraconauriu(Personaje *personaje);

  void agregarDraconaurius(vector<Personaje *> personajes);

  void comienzaJuego();
};

#endif