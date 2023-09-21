/*
Rellenar un array de 10 numeros. Utilizando punteros indicar cuales son pares y su posicion de memoria
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numeros[10] , *dir_numeros;

  for(int i =0; i<10;i++){
    cout << "Digite numero: ";
    cin >> numeros[i];
  }

  dir_numeros = numeros; //Posicion de memoria comienza numeros

  for(int i=0; i<10;i++){
    if(*dir_numeros%2 == 0){
      cout << "El numero " << *dir_numeros << " es par \nEsta en la posicion " << dir_numeros << endl;
    }
    dir_numeros++;
  }


  getch();
  return 0;
}