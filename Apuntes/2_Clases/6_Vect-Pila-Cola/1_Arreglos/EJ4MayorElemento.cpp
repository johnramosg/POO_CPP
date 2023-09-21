/*Lea un vector de enteros y determine el elemento mayor*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int n,mayor;
  cout << "Digite el numero de elementos que tendra el arreglo: ";
  cin >> n;

  int numeros[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Elemento #" << i + 1 << ": ";
    cin >> numeros[i];
  }

  mayor = numeros[0];
  for (int i = 1; i < n; i++)
  {
    if(numeros[i]>numeros[0]){
      mayor = numeros[i];
    }
  }

  cout << "El mayor es : "<< mayor << endl;

  getch();
  return 0;
}
