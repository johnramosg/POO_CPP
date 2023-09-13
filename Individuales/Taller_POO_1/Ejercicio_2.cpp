/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
Fecha creación: 2023-09-12
Fecha última modificación: 2023-09-12
*/
#include <iostream>  //Incluimos la libreria estandar para usar los dispositivos de entrada o salida
using namespace std; // Usamos el nombre de espacio estandar

int main()
{                                               // Definimos la funcion principal
  string nombre, apellido, nit, cargo, salario; // Inicializamos las variables como cadenas de textos, ya que no haremos calculos matematicos con ellas
  cout << "Nombre: ";                           // Mostramos esto en pantalla
  cin >> nombre;                                // Guardamos en la variable nombre
  cout << "Apellido: ";                         // Mostramos esto en pantalla
  cin >> apellido;                              // Guardamos en la variable apellido
  cout << "NIT: ";                              // Mostramos esto en pantalla
  cin >> nit;                                   // Guardamos en la variable nit
  cout << "Cargo: ";                            // Mostramos esto en pantalla
  cin >> cargo;                                 // Guardamos en la variable cargo
  cout << "Salario: ";                          // Mostramos esto en pantalla
  cin >> salario;                               // Guardamos en la variable salario

  cout << nombre << " " << apellido << ", identificada con el numero de identidad " << nit << ", en el puesto de " << cargo<<endl;
  cout<< "recibe un pago mensual de " << salario << endl; // Mostramos en pantalla el texto con sus variables correspondientes

  return 0;
}