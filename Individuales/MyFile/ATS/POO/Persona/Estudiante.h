#ifndef _Estudiante_H_
#define _Estudiante_H_
#include"Persona.h"

class Estudiante: public Persona{
  private:
    string codigo;
    float notafinal;
  public:
    Estudiante(string nombre,int edad, string codigo, float notafinal);
    void mostrarDatosEstudiante();

};
#endif