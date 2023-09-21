/**
Archivo: LibroPapel.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

#include "LibroPapel.h"

/*
Nombre: LibroPapel
Funcion: Constructor
Retorno: No aplica
*/
LibroPapel::LibroPapel() : Libro()
{
}
/*
Nombre: ~LibroPapel
Funcion: Destructor
Retorno: No aplica
*/
LibroPapel::~LibroPapel()
{
}

string LibroPapel::mostrarLibro()
{
  string aux = "";
  if (mensaje.empty())
  {
    aux += "El libro no tiene mensaje \n";
    aux += "Nombre del Libro Papel: " + getNombreLibro();
  }
  else
  {
    aux += "Mensaje de Libro Papel : " + getMensaje() + "\n";
    aux += "Nombre del Libro Papel: " + getNombreLibro();
  }
  return aux;
}
