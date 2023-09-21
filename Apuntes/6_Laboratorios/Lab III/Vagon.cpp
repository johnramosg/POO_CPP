/**
Archivo: Vagon.cpp
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

#include "Vagon.h"

Vagon::Vagon(int _numero, bool _transportaEnfermos) : numero(_numero), transportaEnfermos(_transportaEnfermos)
{
}

Vagon::~Vagon()
{
}

int Vagon:: getNumero()
{
  return numero;
}