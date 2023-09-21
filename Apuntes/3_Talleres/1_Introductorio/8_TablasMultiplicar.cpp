/*
Nombre: Carlos Andrés Hernández Agudelo
Codigo: 202125653
*/

/*
Desarrollar un programa que muestre en las tablas de multiplicar, de cero(0) a cinco(5)
0   1   2   3   4   5
0   0   0   0   0   0   0
1   0   1   2   3   4   5
2   0   2   4   6   8   10
3   0   3   6   9   12  15
4   0   4   8   12  16  20
5   0   5   10  15  20  25
*/

#include <iostream>
#include <string>
using namespace std;

// i => Fila ||| j => columna

int main(){
  cout << "\t";
  for (int i = 0; i <= 5; i++) //Primera Fila de Numeros
  {
    cout << i << "\t";
  }
  cout << endl;
  for (int j = 0; j <= 5; j++) //Columnas de Numeros
  {
    // cout << j << endl << endl;
    cout << j << "\t";
    for (int op=0 ; op <=5; op++){
      cout << j*op << "\t";
    }
    cout << endl;
  }
}