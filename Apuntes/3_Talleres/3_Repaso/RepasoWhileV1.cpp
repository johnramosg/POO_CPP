/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/*
Crear un programa que le permitia descomponer un número en factores, excepto los números primos.
=>Divido tantas veces por un numero (empezando por 2), hasta que ya no se pueda, entonces divido por otro que si sea divisible. Y si nuestra variable inicial llega a uno, significa que ya acabamos el proceso.
*/

// Funcion Para saber si un numero es primo
bool isPrimo(int num)
{
  int i = 2;
  while (i < num and num % i != 0)
  {
    i = i + 1;
  };
  if (i > num or i == num)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int num;
  cin >> num;
  if (isPrimo(num) == true)
  {
    cout << num << endl;
  }
  else
  {
    int aux = 2;
    while(aux > 1)
    {
      while (num % aux == 0)
      {
        if (num != aux)
        {
          cout << aux << " * ";
        }
        else
        {
          cout << aux << endl;
        }
        num /= aux;
      }
      aux++;
    }
  }
}