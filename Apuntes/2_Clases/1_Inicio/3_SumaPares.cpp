#include <iostream>
using namespace std;

//SUMA LOS PARES DE 0 A 100
int main()
{
  int suma = 0;
  for (int numero = 0; numero < 100 + 1; numero++)
  {
    if (numero % 2 == 0)
    {
      cout << "Se procede a sumar " << suma << " con " << numero << endl;
      suma += numero;
    }
  }
  cout << "La suma de pares es " << suma << endl;
  return 0;
}

