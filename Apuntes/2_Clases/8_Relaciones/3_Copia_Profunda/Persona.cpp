/**
Archivo:
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

#include "Persona.h"
#include "Libro.h"

/*
Nombre: Persona
Funcion: Constructor
Retorno: No aplica
*/
Persona::Persona(int edad) : edad(edad)
{
  libro = nullptr;
  soyElPropietario = false;
}
/*
Nombre: ~Persona
Funcion: Destructor
Retorno: No aplica
*/
Persona::~Persona()
{
  if (libro && soyElPropietario)
  {
    delete libro;
    libro = nullptr;
    soyElPropietario = false;
  }
}

void Persona::comprar(Libro *libro)
{
  this->libro = libro;
  soyElPropietario = true;
}

void Persona::copiaProfunda(const Persona &otra)
{
  this->edad = otra.edad;
  this->libro = new Libro(otra.libro->getTitulo(),otra.libro->getAutor());
}


