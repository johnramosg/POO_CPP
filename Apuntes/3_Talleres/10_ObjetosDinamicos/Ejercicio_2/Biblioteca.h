/*
Archivo: Biblioteca.h
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Clase: Biblioteca
Responsabilidad: Esta clase servira para almacenar libros, incluyendo su titulo y su autor, para luego poder mostrarselos al usuario
Relaciones: Contiene a Libro
*/

#ifndef _BIBLIOTECA_H_
#define _BIBLIOTECA_H_
#include <iostream>
#include <string>
#include <vector>
#include "Libro.h"
using namespace std;

class Biblioteca
{
  // Atributos
private:
  vector <Libro> libros;
public:
  // Constructor
  Biblioteca();
  // Destructor
  virtual ~Biblioteca();
  // Funciones
  void alojarLibros();
  Libro *crearLibro();
  void mostrarLibros();
};

#endif