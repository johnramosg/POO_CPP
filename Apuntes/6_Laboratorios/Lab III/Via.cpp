/**
Archivo: Via.cpp
Autor:
Carlos Andrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 2022/02/25
Fecha ultima modificacion: 2022/02/25
licencia: GNU-GPL
*/

#include "Via.h"
#include "Vagon.h"

Via::Via()
{
  // vagones.clear();
}

Via::~Via()
{
  // El funcionamiento es sencillo, recorremos nuestro vector vagones, si este es distinto de nullptr significa que esta enlazado y debemos destruirlo para que no haya memory leaks
  for (int i = 0; i < numerodeVagones(); i++)
  {
    if (vagones[i])
    {
      delete vagones[i];
      vagones[i] = nullptr;
    }
  }
}

void Via::introducirVagon(Vagon *_vagon)
{
  vagones.push_back(_vagon);
}

int Via::numerodeVagones()
{
  return vagones.size();
}

Vagon *Via::getUltimoVagon()
{
  return vagones.back();
}

void Via::eliminarUltimoVagon()
{
  vagones.pop_back();
}

// Aquí cedemos el ultimo vagon de la via actual a la via pasada por paramtero
void Via::retrocederPor(Via &_otraVia)
{
  _otraVia.introducirVagon(getUltimoVagon());
  eliminarUltimoVagon();
}

// Aquí cedemos el ultimo vagon de la via pasada por parametro a la via principal, teniendo en cuenta que la vía debe tener vagones
void Via::avanzarDesde(Via &_otraVia)
{
  if (_otraVia.numerodeVagones() > 0)
  {
    introducirVagon(_otraVia.getUltimoVagon());
    _otraVia.eliminarUltimoVagon();
  }
}

vector<Vagon *> *Via::getVagones()
{
  return &vagones;
}

string Via::estadoActual()
{
  string caracteres = "| ";
  int index = 0;
  int delimitador = numerodeVagones();
  for (Vagon *miVagon : vagones)
  {
    if (index != numerodeVagones() - 1)
    {
      caracteres += to_string(miVagon->getNumero()) + " | ";
    }
    else
    {
      caracteres += to_string(miVagon->getNumero()) + " |";
    }
    index++;
  }
  return caracteres;
}
