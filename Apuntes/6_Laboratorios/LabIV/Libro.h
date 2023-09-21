/*
Archivo: Libro.h
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Clase: Libro
Responsabilidad: Actuar como una clase padre de otros tipos de libros, almacenando atributos propios de un Libro como puede ser su nombre y un mensaje
Relaciones:
- Sirve como clase padre
*/

#ifndef _LIBRO_H_
#define _LIBRO_H_

#include <iostream>
using namespace std;
#include <string>

class Libro
{
  // Atributos
protected:
  string mensaje;
  string nombreLibro[10];

public:
  Libro();
  // Destructor
  virtual ~Libro();
  // Funciones
  virtual string mostrarLibro();
  //Getters
  virtual string getMensaje();
  virtual string getNombreLibro();
  //Setters
  virtual void setMensaje(string mensaje);
  virtual void setNombreLibro(string nombreLibro);
};

#endif