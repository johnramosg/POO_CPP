#include <iostream>
#include <string>
using namespace std;

/*
Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta, multiplicación y división.
*/

int main()
{
  double n1, n2, sum, rest, div, mult;
  cout << "Digite el primer numero: ";
  cin >> n1;
  cout << "Digite el segundo numero: ";
  cin >> n2;

  sum = n1 + n2;
  cout << "\nLa suma es " << sum << endl;

  rest = n1 - n2;
  cout << "La resto es " << rest << endl;

  mult = n1 * n2;
  cout << "La multiplicacion es " << mult << endl;

  div = n1 / n2;
  cout << "La division es " << div << endl;
}