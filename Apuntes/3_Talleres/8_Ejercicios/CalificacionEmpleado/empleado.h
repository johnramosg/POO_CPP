#include <string>
using namespace std;

/*
Archivo: empleado.h
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Clase: empleado.h
Responsabilidad: Determinar la calificacion de un empleado
Relaciones: Ninguna
*/

class Empleado
{
  // Atributos
private:
  // Generamos un dato de tipo string llamado calificacion
  string calificacion;
  // Metodos
public:
  // Constructor
  Empleado();
  // Destructor
  ~Empleado();
  // Funcion para ingresar la calificacion en letra
  void entrarCalificacion();
  // Funcion para extraer la calificacion en palabras
  void sacarCalificacion();
};
