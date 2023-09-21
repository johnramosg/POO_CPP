/*
Archivo: Libro.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Libro
Responsabilidad: Almacenar el titulo y el autor de un Libro
Relaciones: Ninguna
*/

#ifndef _LIBRO_H_
#define _LIBRO_H_
#include <iostream>
using namespace std;

class Libro
{
  // Atributos
private:
  string titulo;
  string autor;

public:
  // Constructor
  Libro(string _titulo, string _autor);
  // Destructor
  virtual ~Libro();
  // Funciones
  void setTitulo();
  void setAutor();
  string getTitulo();
  string getAutor();
};

#endif