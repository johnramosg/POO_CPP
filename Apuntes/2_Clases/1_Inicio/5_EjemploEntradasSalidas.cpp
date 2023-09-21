#include <iostream>
#include <string>
using namespace std;


int main()
{
  string nombre;
  int edad;
  double nota;
  cout << "Como te llamas? ";
  getline(cin, nombre);
  string auxiliar;
  cout << "Cual es tu edad? ";
  getline(cin, auxiliar);
  edad = stoi(auxiliar); // Conversión de string a entero

  cout << "Que nota sacaste? ";
  getline(cin, auxiliar);
  nota = stod(auxiliar); // Conversión de string a flotante en doble precisión
  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " old, saco una nota de " << nota << endl;
}