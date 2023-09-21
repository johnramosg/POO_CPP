/*2. Escriba un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros del vector con su indice asociado*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int n;
  cout << "Digite el numero de elementos que tendra el arreglo: ";
  cin>>n;

  int numeros[n];

  for(int i=0;i<n;i++){
    cout << "Elemento #" << i+1 << ": ";
    cin >> numeros[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << "Indice: " << i << "\tNumero: " << numeros[i] << endl;
  }

  getch();
  return 0;
}
