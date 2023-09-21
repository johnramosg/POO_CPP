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
  Clase: cantante
 Responsabilidad:  canta bien o mal.
 Colaboración: hereda de la clase base persona.
*/

#ifndef __CLASSCANTANTE
#define __CLASSCANTANTE
#include "persona.h"
using namespace std;

	class Cantante : public Persona  // Herencia pública de Persona
	{
	  private:
	    bool cantaBien;
		string nombreArtistico;
	  public:
	    Cantante(string nombre); // Constructor de Cantante (es necesario porque el constructor de Persona requiere un argumento)
		void setcantaBien(bool cantaBien);
		void setnombreArtistico(string nombreArtistico);
		void imprimir(ostream &flujo) throw(int);
    virtual void cantar();
	};


#endif