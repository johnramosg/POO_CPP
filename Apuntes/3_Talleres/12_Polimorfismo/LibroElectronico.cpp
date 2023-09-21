/**
Archivo: LibroElectronico.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

#include "LibroElectronico.h"

/*
Nombre: LibroElectronico
Funcion: Constructor
Retorno: No aplica
*/
LibroElectronico::LibroElectronico() : Libro()
{
}
/*
Nombre: ~LibroElectronico
Funcion: Destructor
Retorno: No aplica
*/
LibroElectronico::~LibroElectronico()
{
}

string LibroElectronico::mostrarLibro()
{
  string aux = "";
  if (mensaje.empty())
  {
    aux += "El libro no tiene mensaje \n";
    aux += "Nombre del Libro Electronico: " + getNombreLibro();
  }
  else
  {
    aux += "Mensaje de Libro Electronico : " + getMensaje() + "\n";
    aux += "Nombre del Libro Electronico: " + getNombreLibro();
  }
  return aux;
}
