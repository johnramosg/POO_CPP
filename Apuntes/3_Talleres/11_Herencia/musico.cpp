  /*
  Asignatura: PROGRAMACIÓN ORIENTADA A OBJETOS (IPOO) 750081M
  Archivo: persona.cpp
  Fecha creación: 30-octubre-2001
  Fecha última modificación: 09-marzo-2014
  Versión: 0.1
  Autor: Angel García Baños
  Modificad por: Cristian Leonardo Ríos López
  Modificad por: Víctor Bucheli
  ESCUELA DE INGENIERÍA DE SISTEMAS Y COMPUTACIÓN
  UniValle
*/

#include "musico.h"
Musico::Musico(string nombre) : Persona(nombre)
{
  this->instrumento = "nn";
  cant=0;
}
void Musico::setInstrumento(string instrumento) 
{
  this->instrumento = instrumento;
}

void Musico::imprimir(ostream &flujo)  throw(int)
{
	if(instrumento.size() == 0) {
	  throw 4;
	}
	flujo<< this->getNombre();
	flujo << endl;
	flujo<<"El instrumento es: " <<this->instrumento;
	flujo << endl;
  flujo<<"La edad es: " <<this->age;
  flujo<< endl;
  flujo<<"Toca " << cuantas_instrumentos() << " instrumentos" << endl;
}


void Musico::setCantInstrumento(int cant)
{
  this->cant=cant;
  cuantas_instrumentos();
}

int Musico::cuantas_instrumentos() const throw(int)
{
  if (cant<0)
  {
    throw 6;
  }
  return cant;
}

