/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

/**
Historia: Aquí llamaremos a diferentes clases con un mismo metodo, para ver lo que es el polimorfismo. Especificamente veremos como se comporta las clases basadas en Libro con el mismo metodo llamado mostrarLibro();
*/

// El polimorfismo en este archivo puede ser simple pero util, al momento de imprimir cada Libro este mensaje de imprimir cambia dependiendo del Libro

#include "App.h"
// Funcion main
int main()
{
  App *miBibliotecaDeLibros = new App();

  miBibliotecaDeLibros->agregarLibro();
  cout << endl;
  miBibliotecaDeLibros->agregarLibro();
  cout << endl;
  miBibliotecaDeLibros->agregarLibro();
  cout << endl;

  miBibliotecaDeLibros->modificarLibros();
  cout << endl;

  miBibliotecaDeLibros->imprimirLibros();

  delete miBibliotecaDeLibros;
  miBibliotecaDeLibros = nullptr;

  return 0;
}
