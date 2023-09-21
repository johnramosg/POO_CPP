/**
Archivo: Biblioteca.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/
#include "Biblioteca.h"
#include <stdio.h>
/*
Nombre: Biblioteca
Funcion: Constructor
Retorno: No aplica
*/
Biblioteca::Biblioteca()
{
}
/*
Nombre: ~Biblioteca
Funcion: Destructor
Retorno: No aplica
*/
Biblioteca::~Biblioteca()
{
}

void Biblioteca::alojarLibros()
{
  int cantidadLibros;
  string aux;
  getline(cin,aux);
  cantidadLibros = stoi(aux);
  for (int i = 0; i < cantidadLibros; i++)
  {
    Libro *libro = crearLibro();
    libros.push_back(*libro);
  }
}

Libro *Biblioteca::crearLibro()
{
  string _titulo;
  string _autor;
  getline(cin,_titulo);
  getline(cin,_autor);
  Libro *miLibro = new Libro(_titulo, _autor);
  return miLibro;
}

void Biblioteca::mostrarLibros()
{
  for (Libro libro : libros)
  {
    cout << libro.getTitulo() << " - " << libro.getAutor() << endl;
  }
}