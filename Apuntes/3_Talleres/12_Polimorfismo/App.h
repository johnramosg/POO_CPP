/*
Archivo: App.h
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Clase: App
Responsabilidad: Almacenar a traves de un vector objetos de clase Libro o derivados, con el fin de hacer acciones con estos.
Relaciones:
- Conoce a Libros
*/

#ifndef _APP_H_
#define _APP_H_

#include "Libro.h"
#include "AudioLibro.h"
#include "LibroElectronico.h"
#include "LibroPapel.h"
#include <vector>

class App
{
  // Atributos
private:
  vector<Libro *> misLibros;
  Libro *crearAudioLibro();
  Libro *crearLibro();
  Libro *crearLibroElectronico();
  Libro *crearLibroPapel();

public:
  App();
  // Destructor
  ~App();
  // Funiones
  void agregarLibro();
  void imprimirLibros();
  void modificarLibros();
};

#endif