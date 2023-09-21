/**
Archivo: Libro.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

#include "Libro.h"

/*
Nombre: Libro
Funcion: Constructor
Retorno: No aplica
*/
Libro::Libro() : mensaje("")
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

string Libro::mostrarLibro()
{
  string aux = "";
  if (mensaje.empty())
  {
    aux += "El libro no tiene mensaje \n";
    aux += "Nombre del Libro: " + getNombreLibro();
  }
  else
  {
    aux += "Mensaje de Libro estandar: " + getMensaje() + "\n";
    aux += "Nombre del Libro: " + getNombreLibro();
  }
  return aux;
}

string Libro::getMensaje()
{
  return mensaje;
}

string Libro::getNombreLibro()
{
  string aux = "";
  for (string letra : nombreLibro)
  {
    if (!letra.empty())
    {
      aux += letra;
    }
  }
  if(aux.empty()){
    return "El libro no tiene nombre";
  }
  return aux;
}

void Libro::setMensaje(string mensaje)
{
  this->mensaje = mensaje;
}

void Libro::setNombreLibro(string nombreLibro)
{
  if (nombreLibro.size() > 10)
  {
    cout << "Nombre muy largo" << endl;
  }
  else
  {
    int indice = 0;
    for (char letra : nombreLibro)
    {
      // Pasamos ese char a string
      string aux(1, letra);
      this->nombreLibro[indice] = aux;
      indice += 1;
    }
  }
}