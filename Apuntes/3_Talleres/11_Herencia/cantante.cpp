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

#include "cantante.h"
Cantante::Cantante(string nombre) : Persona(nombre)
{
this->nombreArtistico = "nn";
this->cantaBien = true;
}
void Cantante::setnombreArtistico(string nombreArtistico) 
{
  this->nombreArtistico = nombreArtistico;
}
void Cantante::setcantaBien(bool cantaBien) 
{
  this->cantaBien = cantaBien;
}

void Cantante::imprimir(ostream &flujo)  throw(int)
{
	if(nombreArtistico.size() == 0) {
	  throw 5;
	}
	flujo<<"El nombre es:"<< this->getNombre();
	flujo << endl;
	flujo<<"El nombre aritistico es:" <<this->nombreArtistico;
	flujo << endl;
  flujo<<"La edad es: " <<this->age;
  flujo<< endl;
	if(cantaBien) 	flujo<<"Canta bien" <<endl;
	else flujo<<"Canta mal" <<endl;
	
}

void Cantante::cantar()
{
  cout << "YO CANTO" << endl;
}