/*
Archivo: LibroElectronico.h
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Clase: LibroElectronico
Responsabilidad: Recibir los metodos y atributos de la clase LibroPapel, modificando un metodo con el fin de mostrar lo que es el polimorfismo
- Es un Libro
*/

#ifndef _LIBROELECTRONICO_H_
#define _LIBROELECTRONICO_H_

#include "Libro.h"

class LibroElectronico : public Libro
{
  // Atributos

public:
  LibroElectronico();
  // Destructor
  ~LibroElectronico();
  // Funciones
  virtual string mostrarLibro();
};

#endif