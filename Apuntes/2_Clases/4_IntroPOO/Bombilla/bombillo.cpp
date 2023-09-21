#include "bombillo.h"
#include <iostream>
#include <string>
using namespace std;

bombillo::bombillo()
{
  estado = "apagado";
}

void bombillo::prender()
{
  estado = "encendido";
}

void bombillo::encender()
{
  prender();
}

void bombillo::apagar()
{
  estado = "apagado";
}

string bombillo::verEstado()
{
  return estado;
}