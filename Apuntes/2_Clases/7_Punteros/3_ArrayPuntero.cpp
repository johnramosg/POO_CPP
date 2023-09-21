/*
Comprobar si un numero es par o impar, y señalar la posicionde memeoria.
Con punteros
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numeros[] ={1,2,3,4,5};
  int *puntero;

  puntero = numeros; //Es igual a => puntero = &numeros[0];

  for(int i=0; i<5;i++){
    cout <<"Elemento del vector [" << i<< "] " << *puntero << endl;
    puntero++;
  }

  getch();
  return 0;
}