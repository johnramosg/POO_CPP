/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Historia: Queremos alojar en una biblioteca libros, con su respectivo titulo y autor, para luego mostrarlos
*/

#include "Biblioteca.h"

// Funcion main
int main()
{

  Biblioteca *miBiblioteca = new Biblioteca();
  miBiblioteca->alojarLibros();
  miBiblioteca->mostrarLibros();

  delete miBiblioteca;
  miBiblioteca = nullptr;

  return 0;
}
