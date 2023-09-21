/*1. Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numeros[] = {1, 2, 3, 4, 5};
  int numerosd[] ={};
  int suma = 0;
  for (int i = 0; i < 5; i++)
  {
    // suma += numeros[i];
    cout << "Numero a sumar: " << numeros[i] << endl;
    // cout << "Suma: " << suma << endl;
  }

  numeros[5] = 2;

  for (int i = 0; i < 6; i++)
  {
    // suma += numeros[i];
    cout << "Numero a sumar: " << numeros[i] << endl;
    // cout << "Suma: " << suma << endl;
  }

  getch();
  return 0;
}
