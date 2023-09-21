/*
  Asignatura: PROGRAMACIÓN ORIENTADA A OBJETOS (IPOO) 750081M
  Archivo: persona.h
  Fecha creación: 17-octubre-2001
  Fecha última modificación: 09-Noviembre-2014
  Versión: 0.1
  Autor: Angel García Baños
  Modificad por: Cristian Leonardo Ríos López
  Modificad por: Víctor Bucheli
  ESCUELA DE INGENIERÍA DE SISTEMAS Y COMPUTACIÓN
  UniValle
  Clase: Persona
 Responsabilidad: tiene un nombre y tiene actitudes para tocar un instrumento o para escuchar del auditorio.
 Colaboración: .
*/

#ifndef __CLASSPERSONA
#define __CLASSPERSONA

#include <string>
#include <iostream>
#include <exception>
#include <vector>

using namespace std;

class Persona
{
  private:
  public:
    Persona(string nombre) throw(int);
	~Persona();
	virtual void imprimir(ostream &flujo) throw(int);
	string getNombre() const;
  void setEdad(int age);
  
  protected:
  string nombre;
  int age;
};

#endif