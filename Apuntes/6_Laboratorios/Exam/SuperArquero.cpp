/**
Archivo: SuperArquero.cpp
Autor: Carlos Hernandez
Fecha creacion:  18/03/2022
Fecha ultima modificacion:  18/03/2022
licencia: GNU-GPL
*/

#include "SuperArquero.h"

SuperArquero::SuperArquero(int vida, int ataque, string nombre) : Personaje(vida, ataque, nombre)
{
}

SuperArquero::~SuperArquero()
{
}

void SuperArquero::averiguarEstaVivo()
{
  if (vida == 0 or vida <= 0)
  {
    // Nunca muere
    estaVivo = true;
  }
}

void SuperArquero::atacar(Personaje *personaje)
{
  personaje->setVida(0);
  personaje->averiguarEstaVivo();
  // Cada vez que ataca pierde uno de vida
  this->setVida(getVida() - 1);
  // Averiguamos si esta vivo o muerto
  this->averiguarEstaVivo();
}