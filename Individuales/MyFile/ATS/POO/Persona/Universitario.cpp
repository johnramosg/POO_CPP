#include"Universitario.h"

Universitario::Universitario(string _nombre, int _edad, string _codigo, float _notafinal, string _semestre, string _carrera) : Estudiante(_nombre,_edad,_codigo,_notafinal){
  semestre=_semestre;
  carrera=_carrera;
}
void Universitario::mostrarDatosUniversitario()
{
  mostrarDatosEstudiante();
  cout << "Semestre: " << semestre << endl;
  cout << "Carrera: " << carrera << endl;
}