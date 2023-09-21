/*
Puntero - Declaración Punteros
[Variable que almacena la direccion de memoria de otra variable ]

&n = La direccion de n
*n = la variable cuya direccion esta almacenada en n
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int num,*dir_num;
  // dir num => Punto (*) que me va a guardar la direccion de un entero
  num = 20;
  dir_num = &num;

  cout << "Numero: " << *dir_num << endl;
  cout << "Direccion en mem : " << dir_num << endl;

  getch();
  return 0;
}