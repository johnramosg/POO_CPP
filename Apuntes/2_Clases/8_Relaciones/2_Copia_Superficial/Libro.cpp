/**
Archivo: Libro.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

#include "Libro.h"

/*
Nombre: Libro
Funcion: Constructor
Retorno: No aplica
*/
Libro::Libro(string _titulo, string _autor):titulo(_titulo),autor(_autor)
{
}
/*
Nombre: ~Libro
Funcion: Destructor
Retorno: No aplica
*/
Libro::~Libro()
{
}

void Libro::setTitulo()
{
  string aux;
  cin >> aux;
  titulo = aux;
}

void Libro::setAutor()
{
  string aux;
  cin >> aux;
  autor = aux;
}

string Libro::getAutor()
{
  return autor;
}

string Libro::getTitulo()
{
  return titulo;
}