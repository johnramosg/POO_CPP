/*
Archivo: laboratorio.h
Autor: Carlos Hernandez
Fecha creacion:26/01/2022
Fecha ultima modificacion:26/01/2022
licencia: GNU-GPL
*/

/**
Clase: Laboratorio
Responsabilidad: Generar una clase que guarde las temperaturas en grados celsius y fahrenheit para medir el cambio de temperatura del agua que se encuentra en un recipiente
Relaciones: Ninguna
*/

#ifndef _LABORATORIO_H_
#define _LABORATORIO_H_
#include <string>
#include <iostream>
using namespace std;

class Laboratorio
{
  // Atributos
  private:
    float temperatura;
  // Meotodos
  public:
    // Constructor
    Laboratorio();
    // Destructor
    ~Laboratorio();
    // Funciones
    float getTemperatura();
    void setTemperatura(float valor);
    void temperaturaFahrenheitReferencia(float &auxTemperatura);
    void temperaturaFahrenheitPuntero(float *auxTemperatura);
};

#endif