// for
// i in range(numa + 1) : apara = "*" * numa

/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/

/*
Escriba un programa que tome un solo argumento entero "altura" y muestre una "pirámide" de esta altura compuesta por "*" caracteres en la pantalla.
La piramide empezara por dos *, y el numero de asterisco depende del numero de fila, sea # de fila = i, entonces el numero de asteriscos sera igual a 2*i
*/

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
  int altura, row, column;
  cin >> altura;
  bool condicion = true;
  do
  {
    for (row = 1; row <= altura; row++)
    {
      for (column = 1; column <= altura - row; column++)
      {
        cout << " ";
      }
      for (column = 1; column <= 2 * row; column++)
      {
        cout << "*";
      }
      cout << "\n";
    }
    condicion = false;
  } while (condicion);
}