/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

/**
Historia: ESCRIBIR HISTORIA
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
// #include <string.h>
// #include <stdlib.h>
// #include <string>
using namespace std;

// Prototipo de funcion
void pedirDatos();
int contandoVocales(char *);

char nombreUsario[30];

// Funcion main
int main()
{
  pedirDatos();

  cout << "\n El numero de vocales del nombre es : "<< contandoVocales(nombreUsario) << endl;

  // nombreUsario = &nombreUsuario[0]

  getch();
  return 0;
}

void pedirDatos(){
  cout << "Digite su nombre: ";
  cin.getline(nombreUsario,30,'\n');

  strupr(nombreUsario); //transformando a mayuscula el nombre
}
//
int contandoVocales(char *nombre){
  int count=0;
  while(*nombre){ //Mientras nombre no sea null '\0'
    switch(*nombre){
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': count++;
    }
    nombre++;
  }
  return count;
}