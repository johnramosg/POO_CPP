/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 18/03/2022
Fecha ultima modificacion: 18/03/2022
licencia: GNU-GPL
*/

/**
Historia: El mundo pequeño de Jenkins donde viven 2 tipos de personajes: 1: Arqueros y 2: Draconaurius. Lucharan en una batalla a muerte para determinar quien se queda con el mundo (Arqueros vs Draconaurius). Estos dos poderosos ejercitos se conforman por 7 personajes cada uno en total. En el primer ejercito existen 2 super Arqueros++ y 5 Arqueros y en el segundo ejercito 5 super Draconaurius++ y 2 Draconaurius.
*/
#include "Juego.h"

// Funcion main
int main()
{
  // Creamos los arqueros
  vector<Personaje *> arqueros = {
      new SuperArquero(7, 5),
      new SuperArquero(7, 5),
      new Personaje(4, 3, "Arquero"),
      new Personaje(4, 3, "Arquero"),
      new Personaje(4, 3, "Arquero"),
      new Personaje(4, 3, "Arquero"),
      new Personaje(4, 3, "Arquero")};

  // Creamos los Draconaurius.
  vector<Personaje *> draconaurius = {
      new Personaje(3, 1, "Draconaurius++"),
      new Personaje(3, 1, "Draconaurius++"),
      new Personaje(3, 1, "Draconaurius++"),
      new Personaje(3, 1, "Draconaurius++"),
      new Personaje(3, 1, "Draconaurius++"),
      new Personaje(2, 1, "Draconaurius"),
      new Personaje(2, 1, "Draconaurius")
  };

  Juego *miJuego = new Juego();
  miJuego->agregarArqueros(arqueros);
  miJuego->agregarDraconaurius(draconaurius);

  miJuego->comienzaJuego();

  delete miJuego;
  miJuego = nullptr;

  return 0;
}
