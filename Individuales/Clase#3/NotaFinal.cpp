/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
*/
#include <iostream>
// Fecha creación: 2023-09-06

// Fecha última modificación: 2023-09-06

using namespace std;

float comprobarValor(float nota)
{ // Función para comprobar si la nota es válida o no
  while (nota < 0 or nota > 5)
  { // Se usa un while para comprobar si el valor digitado es válido o no
    cout << "Digite una nota valida"<<"\n(Rango de 0 a 5): ";
    cin >> nota;
    cout << endl; // Si no lo es, se vuelve a pedir hasta que sea válido.
  }
  return nota;
}

int main()
{
  float nPractica, nTeorica, nParticipacion; // Se crean las variables a usar

  cout << "Digite la nota de practica: ";
  cin >> nPractica;
  cout << endl;                          // Se pide la nota correspondiente
  nPractica = comprobarValor(nPractica); // Se comprueba mediante la función si la nota es válida
  cout << "Digite la nota teorica: ";
  cin >> nTeorica;
  cout << endl;
  nTeorica = comprobarValor(nTeorica);
  cout << "Digite la nota de participacion: ";
  cin >> nParticipacion;
  cout << endl;
  nParticipacion = comprobarValor(nParticipacion);
  float nPromedio = (nPractica * 0.3) + (nTeorica * 0.6) + (nParticipacion * 0.1); // Calculamos el promedio y lo metemos en una nueva variable
  cout << "La nota final es: " << nPromedio<<endl<<endl;                                       // Imprimimos la variable
}