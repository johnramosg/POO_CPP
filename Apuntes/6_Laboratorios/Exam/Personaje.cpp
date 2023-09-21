/**
Archivo: Personaje.cpp
Autor: Carlos Hernandez
Fecha creacion:  18/03/2022
Fecha ultima modificacion:  18/03/2022
licencia: GNU-GPL
*/

#include "Personaje.h"

Personaje::Personaje(int vida, int ataque, string nombre) : nombre(nombre), vida(vida), ataque(ataque), estaVivo(true)
{
}

Personaje::~Personaje()
{
}

int Personaje::getVida()
{
  return vida;
}

int Personaje::getAtaque()
{
  return ataque;
}

bool Personaje::getEstaVivo()
{
  return estaVivo;
}

string Personaje::getNombre()
{
  return nombre;
}

void Personaje::setVida(int vida)
{
  this->vida = vida;
}

void Personaje::setAtaque(int ataque)
{
  this->ataque = ataque;
}

void Personaje::averiguarEstaVivo()
{
  if (vida == 0 or vida <= 0)
  {
    estaVivo = false;
  }
}

void Personaje::atacar(Personaje *personaje)
{
  personaje->setVida(0);
  personaje->averiguarEstaVivo();
  personaje->estaVivo = false;
  //Cada vez que ataca pierde uno de vida
  this->setVida(getVida()-1);
  //Averiguamos si esta vivo o muerto
  this->averiguarEstaVivo();
}