/*
Asignacion dinamica de Arreglos

new: Reserva el numero de bytes solicitado por la declaracion
delete: Libera un bloque de bytes solicitado anteriormente

numeros[]

EjemplO: Pedir al usuario n calificacione  y almacenarlo en un arreglo dinamico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h> //FUNCIONA NEW Y DELETE

using namespace std;

void pedirNotas();   //Prototipo de funcion
void mostrarNotas(); //Prototipo de funcion


int numCalif, *calif;

int main()
{
  pedirNotas();
  mostrarNotas();

  delete[] calif; //Liberar memoria
  getch();
  return 0;
}

void pedirNotas()
{
  cout << "Digite el numero de calificiaciones: ";
  cin >> numCalif;

  calif = new int[numCalif]; //Crear arreglo dinamico

  for (int i = 0; i < numCalif; i++)
  {
    cout << "Ingrese una nota: ";
    cin >> calif[i];
  };
}

void mostrarNotas()
{
  cout << "\n\nMotrando Notas del Usuario \n";
  for (int i = 0; i < numCalif; i++)
  {
    cout << calif[i] << endl;
  }

}