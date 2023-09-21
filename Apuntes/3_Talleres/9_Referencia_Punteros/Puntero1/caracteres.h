/*
Archivo: caracteres.h
Autor: Carlos Hernandez
Fecha creacion: 26/01/2022
Fecha ultima modificacion: 26/01/2022
licencia: GNU-GPL
*/

/**
Clase: Caracteres
Responsabilidad: Almacenar un caracter para luego contar las vocales de este
Relaciones: Ninguna
*/

#ifndef _CARACTERES_H_
#define _CARACTERES_H_
#include <string>
#include <iostream>
using namespace std;

class Caracteres
{
  // Atributos
  private:
    char cadena[1000];
    // Metodos
  public:
    // Constructor
    Caracteres();
    // Destructor
    ~Caracteres();
    // Funciones
    void pasarMayusculas();
    void getCadena();
    void setCadena();
    int numeroVocales();
};

#endif