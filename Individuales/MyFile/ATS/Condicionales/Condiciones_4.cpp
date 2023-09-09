#include <iostream>
using namespace std;

int main()
{
  // Definimos las variables
  int numero1, numero2, numero3;

  // Pide los numero
  cout << "Este programa analizara el mayo entre tres numeros" << endl;
  cout << "Digite sus numeros: \n";
  cin >> numero1 >> numero2 >> numero3;

  // Definimos los condicionales
  if (numero1 > numero2 and numero1 > numero3) // Compara el numero 1 con el 2 y el 3
  {
    cout << "El numero " << numero1 << " es mayor" << endl;
  }
  else if (numero2 > numero1 and numero2 > numero3) // Compara el numero 2 con el 1 y el 3
  {
    cout << "El numero " << numero2 << " es mayor" << endl;
  }
  else if (numero3 > numero1 and numero3 > numero2) // Compara el numero 3 con el 1 y el 2
  {
    cout << "El numero " << numero3 << " es mayor" << endl;
  }
  else
  {
    cout<<"Los numeros son iguales"<<endl;
  }

  return 0;
}