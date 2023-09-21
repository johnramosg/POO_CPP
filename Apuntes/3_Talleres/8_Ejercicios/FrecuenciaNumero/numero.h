#include <string>
using namespace std;

/*
Archivo: numero.h
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Clase: numero.h
Responsabilidad: Determinar la frecuencia de los digitos en un numero
Relaciones: Ninguna
*/

class Numero
{
  // Atributos
private:
  // Generamos un dato de tipo string llamado calificacion
  int numero;
  // Metodos
public:
  // Constructor
  Numero();
  // Destructor
  ~Numero();
  // Funcion para ingresar un numero
  void entrarNumero();
  // Funcion para determinar el numero de digitos de un numero
  int determinarDigitos();
  // Funcion para saber la frecuencia de digitos de un numero
  void frecuenciaDigitos();
};
