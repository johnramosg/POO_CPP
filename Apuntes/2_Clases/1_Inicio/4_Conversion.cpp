#include <string>
#include <iostream>
using namespace std;

int main()
{//
  int entero = 20;
  string cadena = to_string(entero); // Convierte entero a string
  int entero2 = stoi(cadena);         // Convierte string a entero
  double doble = 5.123;
  string cadena2 = to_string(doble); // Convierte double a string
  double doble2 = stod(cadena2);      // Convierte string a double
  cout << "Tienes ?¿";
}