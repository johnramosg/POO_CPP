/*
Archivo: LibroPapel.h
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Clase: LibroPapel
Responsabilidad: Recibir los metodos y atributos de la clase LibroPapel, modificando un metodo con el fin de mostrar lo que es el polimorfismo
- Es un Libro
*/

#ifndef _LIBROPAPEL_H_
#define _LIBROPAPEL_H_

#include "Libro.h"

class LibroPapel : public Libro
{
  // Atributos

public:
  LibroPapel();
  // Destructor
  ~LibroPapel();
  // Funciones
  virtual string mostrarLibro();
};

#endif