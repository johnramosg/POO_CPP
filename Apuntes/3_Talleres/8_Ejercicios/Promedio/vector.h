#include <string>
using namespace std;
#include <vector>

/*
Archivo: vector.h
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Clase: vector.h
Responsabilidad: Ser la clase vector que almacene los diez numeros, calcule el promedio de estos y los compare
Relaciones: Ninguna
*/

class Vector
{
  // Atributos
private:
  // inicializamos un vector
  vector<double> vect;
  // int n;
  // Meotodos
public:
  // Constructor vacio
  Vector();
  // Destructor
  ~Vector();
  // Construir el vector con determinado numero de datos
  void construyeVector(int numeroDatos);
  // Promedio
  double promedio();
  // suma
  double suma();
  // Elementos mayores al promedio
  void mayorPromedio();
  // Elementos menores al promedio
  void menorPromedio();
};