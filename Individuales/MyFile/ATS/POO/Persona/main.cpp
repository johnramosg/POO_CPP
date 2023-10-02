#include"Persona.h"
#include "Empleado.h"
#include "Estudiante.h"
#include "Universitario.h"

int main(){
  Persona persona1("Luisa",16);
  Empleado empleado1("Carlos",22,"Operario",1800000);
  Estudiante estudiante1("Salome",15,"23743686",4.5);
  Universitario universitario1("John",19,"2370742",4.59,"Segundo","Ingenieria de sistemas");

  cout<<"\nDatos de la persona"<<endl;
  persona1.mostrarDatosPersona();
  
  cout<<"\nDatos del empleado"<<endl;
  empleado1.mostrarDatosEmpleado();

  cout<< "\nDatos del estudiante" << endl;
  estudiante1.mostrarDatosEstudiante();

  cout << "\nDatos del estudiante Universitario" << endl;
  universitario1.mostrarDatosUniversitario();

  return 0;
}