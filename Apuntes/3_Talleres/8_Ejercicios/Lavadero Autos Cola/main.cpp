/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 16/01/2022
Fecha ultima modificacion: 16/01/2022
licencia: GNU-GPL
*/

/**
Historia: Un lavadero de autos requiere implementar un sistema para sus clientes. Cada vez que se ingresa un auto se encola con el número de la placa; cuando un carro se entrega a su dueño, el sistema desencola el auto; el dueño del lavadero puede observar el siguiente carro a lavar y todos los autos que están pendientes por lavar.
*/

#include "colas.h"
#include <iostream>
using namespace std;

int main()
{
  Cola colaAutos;

  colaAutos.entrarAuto("ABC-123");
  colaAutos.entrarAuto("CGE-435");
  colaAutos.entrarAuto("WER-223");
  colaAutos.entrarAuto("AAA-785");
  colaAutos.mostrarAutos();
  colaAutos.sacarAuto();
  colaAutos.proximoAuto();
  colaAutos.mostrarAutos();
  // cout << endl;
}
