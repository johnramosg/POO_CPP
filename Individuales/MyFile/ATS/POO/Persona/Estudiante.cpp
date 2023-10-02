#include "Estudiante.h"

Estudiante::Estudiante(string _nombre,int _edad,string _codigo,float _notafinal):Persona(_nombre,_edad){
  codigo=_codigo;
  notafinal=_notafinal;
}

void Estudiante::mostrarDatosEstudiante(){
  mostrarDatosPersona();
  cout << "Codigo: " << codigo << endl;
  cout << "Nota Final: " << notafinal << endl;
}