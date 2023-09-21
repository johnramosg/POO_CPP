/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/

// Escriba un programa para mostrar los años bisiestos que se encuentran entre dos años dados.

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool isBisiesto(int year)
{
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return true;
    }
  }
  else
  {
    return false;
  }
}

int main()
{
  int inicio, fin;
  cin >> inicio;
  cin >> fin;
  cout << "Años bisiestos entre dichos años: ";
  for (inicio; inicio <= fin; inicio++)
  {
    if (isBisiesto(inicio) == true)
    {
      cout << inicio << " ";
    }
  }
}