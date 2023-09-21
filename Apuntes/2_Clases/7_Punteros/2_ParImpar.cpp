/*
Comprobar si un numero es par o impar, y señalar la posicionde memeoria.
Con punteros
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numero,*dir_num;

  cout << "Digite el numero: ";
  cin >> numero;

  dir_num = &numero;

  if(*dir_num%2==0){
    cout << "El numero " << *dir_num << " es par y su espacio en memoria es "<< dir_num << endl;
  }else{
    cout << "El numero " << *dir_num << " es impar y su espacio en memoria es " << dir_num << endl;
  }



  getch();
  return 0;
}