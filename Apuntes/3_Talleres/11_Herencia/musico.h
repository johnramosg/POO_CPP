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
  Clase: Musico
 Responsabilidad:  tocar un instrumento.
 Colaboración: hereda de la clase base persona.
*/

#ifndef __CLASSMUSICO
#define __CLASSMUSICO
#include "persona.h"
using namespace std;

	class Musico : public Persona  // Herencia pública de Persona
	{
	private:
	  string instrumento;
    int cant;
	public:
	  Musico(string nombre); // Constructor de Cartero (es necesario porque el constructor de Persona requiere un argumento)
		void setInstrumento(string instrumento);
		void imprimir(ostream &flujo) throw(int);
    int cuantas_instrumentos() const throw(int); 
    void setCantInstrumento(int cant);
	};


#endif