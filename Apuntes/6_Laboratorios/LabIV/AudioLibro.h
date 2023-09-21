/*
Archivo: AudioLibro.h
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Clase: AudioLibro
Responsabilidad: Recibir los metodos y atributos de la clase LibroPapel, modificando un metodo con el fin de mostrar lo que es el polimorfismo
- Es un Libro
*/

#ifndef _AUDIOLIBRO_H_
#define _AUDIOLIBRO_H_

#include "Libro.h"

class AudioLibro : public Libro
{
  // Atributos

public:
  AudioLibro();
  // Destructor
  ~AudioLibro();
  // Funciones
  virtual string mostrarLibro();
};

#endif