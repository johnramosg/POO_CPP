/**
Archivo: Juego.cpp
Autor: Carlos Hernandez
Fecha creacion:  18/03/2022
Fecha ultima modificacion:  18/03/2022
licencia: GNU-GPL
*/

#include "Juego.h"

Juego::Juego() : isJuego(true), arquerosVivos(true), draconauriusVivos(true)
{
}

Juego::~Juego()
{
  // Borramos relaciones para el vector arqueros
  for (Personaje *personaje : arqueros)
  {
    if (personaje)
    {
      delete personaje;
      personaje = nullptr;
    }
  }
  arqueros.clear();
  // Borramos relaciones para el vector  draconaurius
  for (Personaje *personaje : draconaurius)
  {
    if (personaje)
    {
      delete personaje;
      personaje = nullptr;
    }
  }
  draconaurius.clear();
}

void Juego::agregarArquero(Personaje *personaje)
{
  arqueros.push_back(personaje);
}

void Juego::agregarArqueros(vector<Personaje *> personajes)
{
  for (Personaje *personaje : personajes)
  {
    agregarArquero(personaje);
  }
}

void Juego::agregarDraconauriu(Personaje *personaje)
{
  draconaurius.push_back(personaje);
}

void Juego::agregarDraconaurius(vector<Personaje *> personajes)
{
  for (Personaje *personaje : personajes)
  {
    agregarDraconauriu(personaje);
  }
}

void Juego::averguarArqueros()
{
  bool alguienConVida = false;
  for (Personaje *personaje : arqueros)
  {
    if (personaje->getVida() > 0)
    {
      alguienConVida = true;
    }
  }
  if (alguienConVida == false)
  {
    isJuego = false;
    arquerosVivos = false;
  }
}

void Juego::averguarDraconaurius()
{
  bool alguienConVida = false;
  for (Personaje *personaje : draconaurius)
  {
    if (personaje->getVida() > 0)
    {
      alguienConVida = true;
    }
  }
  if (alguienConVida == false)
  {
    isJuego = false;
    draconauriusVivos = false;
  }
}

void Juego::comienzaJuego()
{
  cout << "Ejercito 1 empieza con " << arqueros.size() << " Arqueros" << endl;
  cout << "Ejercito 2 empieza con " << draconaurius.size() << " Draconaurius" << endl;
  while (isJuego)
  {
    atacarArqueros();
    atacarDraconaurius();
    averguarArqueros();
    averguarDraconaurius();
  }
  if (!isJuego)
  {
    if (!arquerosVivos)
    {
      int numeroDracos = 0;
      for (Personaje *personaje : draconaurius)
      {
        if (personaje->getEstaVivo() == true)
        {
          numeroDracos += 1;
        }
      }
      cout << "Ejercito 2 gana, queda con " << numeroDracos << " Draconaurius" << endl;
    }

    if (!draconauriusVivos)
    {
      int numeroArqueros = 0;
      for (Personaje *personaje : arqueros)
      {
        if (personaje->getEstaVivo() == true)
        {
          numeroArqueros += 1;
        }
      }
      cout << "Ejercito 1 gana, queda con " << numeroArqueros << " Arqueros" << endl;
    }
  }
}

void Juego::atacarArqueros()
{
  for (int i = 0; i < arqueros.size(); i++)
  {
    for (int j = 0; j < draconaurius.size(); j++)
    {
      if (draconaurius[j]->getEstaVivo())
      {
        arqueros[i]->atacar(draconaurius[j]);
        cout << "El " << arqueros[i]->getNombre() << " " << i + 1 << " ha atacado al " << draconaurius[j]->getNombre() << " " << j + 1 << endl;
        ;
      }
    }
  }
}

void Juego::atacarDraconaurius()
{
  for (int i = 0; i < draconaurius.size(); i++)
  {
    if (draconaurius[i]->getEstaVivo() == true)
    {
      for (int j = 0; j < arqueros.size(); j++)
      {
        if (arqueros[j]->getEstaVivo())
        {
          draconaurius[i]->atacar(arqueros[j]);
          cout << "El " << draconaurius[i]->getNombre() << " " << i + 1 << " ataco al " << arqueros[j]->getNombre() << " " << j + 1 << endl;
          ;
        }
      }
    }
  }
}
