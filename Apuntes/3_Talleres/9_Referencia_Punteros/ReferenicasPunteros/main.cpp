/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 26/01/2022
Fecha ultima modificacion: 26/01/2022
licencia: GNU-GPL
*/

/**
Historia:En el laboratorio XYZ se está realizando un experimento de ebullición, en el proceso se están utilizando las escalas Celsius (0 - 100 grados) y Fahhrenheit (32 - 212 grados) para medir el cambio de temperatura del agua que se encuentra en un recipiente. Lo han contratado como desarrollador para que implemente una solución en C++ que permita cumplir los siguientes requisitos:

Existe un método denominado temperaturaFahrenheitReferencia() que recibe como argumento por referencia la temperatura inicial en grados Fahrenheit e imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
Existe un método denominado temperaturaFahrenheitPuntero() que recibe como argumento un puntero con la temperatura inicial en grados Fahrenheit e imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
*/
#include "laboratorio.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Funcion main
int main()
{
  Laboratorio LabAgua;
  LabAgua.setTemperatura(32);
  float auxTemperatura = LabAgua.getTemperatura();
  LabAgua.temperaturaFahrenheitReferencia(auxTemperatura);
  auxTemperatura = LabAgua.getTemperatura();
  float *punteroTemperatura = &auxTemperatura;
  LabAgua.temperaturaFahrenheitPuntero(punteroTemperatura);
}
