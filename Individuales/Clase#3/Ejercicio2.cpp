#include <iostream>
using namespace std;

int entradast()
{
  string nombre, apellido, nit, cargo;
  string salario, salida;

  cout << "Nombre: ";
  cin >> nombre;
  cout << "Apellido: ";
  cin >> apellido;
  cout << "NIT: ";
  cin >> nit;
  cout << "Cargo: ";
  cin >> cargo;
  cout << "Salario: ";
  cin >> salario;
  cout << nombre << " " << apellido << ", "
       << "identificada con el numero de identidad " << nit << ", "
       << "en el puesto de " << cargo << " "
       << "recibe un pago mensual de " << salario;
  return 0;
}