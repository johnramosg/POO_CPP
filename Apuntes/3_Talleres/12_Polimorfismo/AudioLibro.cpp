/**
Archivo: AudioLibro.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

#include "AudioLibro.h"

/*
Nombre: AudioLibro
Funcion: Constructor
Retorno: No aplica
*/
AudioLibro::AudioLibro() : Libro()
{
}
/*
Nombre: ~AudioLibro
Funcion: Destructor
Retorno: No aplica
*/
AudioLibro::~AudioLibro()
{
}

string AudioLibro::mostrarLibro()
{
  string aux = "";
  if (mensaje.empty())
  {
    aux += "El Audio libro no tiene mensaje \n";
    aux += "Nombre del Audio Libro: " + getNombreLibro();
  }
  else
  {
    aux += "Mensaje de Audio Libro : " + getMensaje() + "\n";
    aux += "Nombre del Audio Libro: " + getNombreLibro();
  }
  return aux;
}
