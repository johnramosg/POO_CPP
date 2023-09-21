/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/

/*
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Historia:
*/
#include "vector.cpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Funcion main
int main()
{
  Vector vectorNumeros;
  vectorNumeros.construyeVector(10);
  cout << vectorNumeros.promedio() << endl;
  vectorNumeros.mayorPromedio();
  vectorNumeros.menorPromedio();
}
